#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    // /INPUT

    int i = max(0LL, min(n, (b - a + 1))),
        j = i;

    int res = max({a * n, (b + 1) * i - (i * (i + 1) / 2) + (n - j) * a});
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