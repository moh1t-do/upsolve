#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> h(n), dp(n);
    for (auto &e : h)
        cin >> e;
    // /INPUT

    for (int i = 1; i < n; i++)
    {
        int mn = 1e9;
        for (int j = max(0LL, i - k); j < i; j++)
        {
            int c = dp[j] + abs(h[i] - h[j]);
            mn = min(mn, c);
        }
        dp[i] = mn;
    }

    cout << dp[n-1] << endl;
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