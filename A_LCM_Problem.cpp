#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int l, r;
    cin >> l >> r;
    // /INPUT
    if (2 * l > r)
        cout << -1 << " " << -1 << endl;
    else
        cout << l << " " << 2 * l << endl;
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