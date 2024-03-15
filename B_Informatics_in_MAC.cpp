#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &ele : vec)
        cin >> ele;
    // /INPUT

    vector<int> pre(n), suf(n);
    unordered_set<int> preMex, sufMex;
    int a, b;
    a = b = 0;
    for (int i = 0; i < n; i++)
    {
        preMex.insert(vec[i]);
        while (preMex.count(a))
            a++;
        pre[i] = a;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        sufMex.insert(vec[i]);
        while (sufMex.count(b))
            b++;
        suf[i] = b;
    }

    for (int i = 0; i < n - 1; i++)
        if (pre[i] == suf[i + 1])
        {
            cout << 2 << endl;
            cout << 1 << " " << i + 1 << endl;
            cout << i + 2 << " " << n << endl;
            return;
        }

    cout << -1 << endl;
}

int main()
{
    fast;
    int t{1};
    cin >> t;
    while (t--)
        solve();

    return 0;
}