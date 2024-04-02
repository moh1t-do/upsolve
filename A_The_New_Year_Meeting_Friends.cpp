#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    // /INPUT

    int res = 1e9;
    for (int i = 1; i <= 100; i++)
    {
        int tmp = abs(i - x) + abs(i - y) + abs(i - z);
        res = min(res, tmp);
    }
    cout << res << endl;
}

int32_t main()
{
    fast;
    int t{1};
    // cin >> t;
    while (t--)
        solve();

    return 0;
}