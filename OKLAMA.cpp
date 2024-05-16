#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int n, q;
    cin >> n >> q;

    priority_queue<int> l;
    priority_queue<int, vector<int>, greater<int>> r;

    int sum1, sum2;
    sum1 = sum2 = 0;
    vector<int> res(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        sum2 += x;
        r.push(x);
        l.push(r.top());
        sum1 += r.top();
        sum2 -= r.top();
        r.pop();

        if (l.size() > r.size())
        {
            sum2 += l.top();
            r.push(l.top());
            sum1 -= l.top();
            l.pop();
        }

        res[i] = sum2 - sum1;
    }

    // /INPUT

    for (int i = 0; i < q; i++)
    {
        int qry;
        cin >> qry;
        qry--;
        cout << res[qry] << " ";
    }
    cout << endl;
}

int32_t main()
{
    fast;
    int t{1};
    cin >> t;
    while (t--)
        solve();

    return 0;
}

/*
The solution just ends up being k/2 + 1 elements being pos and k/2 elements being neg
A B C D E
A+B-C D E
D+E-(A+B-C)
-A-B+C+D+E

We will precompute ans for every k.
To do this we will use two heaps to keep track of  k/2+1 with max values and k/2 with min values. Similar to median to running sum.
*/