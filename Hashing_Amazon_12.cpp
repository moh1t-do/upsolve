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
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    // /INPUT

    int res = 0;
    for (auto e : mp)
    {
        int f = e.second;
        if (f == 1)
        {
            cout << -1 << endl;
            return;
        }
        else if (f % 3 == 0)
            res += f / 3;
        else
            res += f / 3 + 1;
    }
    cout << res << endl;
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