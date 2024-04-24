#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> vec(n);
    for (auto &e : vec)
        cin >> e;
    // /INPUT

    int ans = 0;
    for (auto &e : vec)
        ans += min(e * x, y);

    cout << ans << endl;
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