#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &e : vec)
        cin >> e;
    // /INPUT

    int pos = -1;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(i + 1);
        if (vec[i] == 1)
            pos = i;
    }

    vector<int> res(n);
    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != pos % 2)
        {
            int nx = n + 2 - vec[i];
            res[i] = nx;
            s.erase(nx);
        }
        else
            pq.push({vec[i], i});
    }

    while (!pq.empty())
    {
        int idx = pq.top().second;
        pq.pop();
        res[idx] = *s.begin();
        s.erase(s.begin());
    }

    for (auto &e : res)
        cout << e << " ";
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
6 5 1 4 2 3
1 2 6 3 5 4
7 7 7 7 7 7

to make local max make element n + 2 while does not share same index parity with 1 as maximum achievable value of 1 is n + 1.

*/