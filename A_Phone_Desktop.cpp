#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int x, y;
    cin >> x >> y;
    // /INPUT

    int res = y / 2 + y % 2,
        rem = 7 * (y / 2) + 11 * (y % 2);

    int add = 0;
    if (x > rem)
        add = ceil((x - rem) / 15.0);

    cout << res + add << endl;
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