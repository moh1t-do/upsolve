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
    vector<int> vec(n);
    for (auto &e : vec)
        cin >> e;
    // /INPUT

    int ans = 1e9;
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 1e9));
    for (int i = 0; i <= k; i++)
        dp[0][i] = 0;

    for (int pos = 1; pos <= n; pos++)
    {
        for (int c = 0; c <= k; c++)
        {
            int mn = 1e9;
            for (int p = pos; pos - p <= c && p > 0; p--)
            {
                mn = min(mn, vec[p - 1]);

                int x = (pos - p + 1) * mn;

                x += dp[p - 1][c - (pos - p)];
                dp[pos][c] = min(dp[pos][c], x);
            }
        }
    }

    for(int i=0; i<=k; i++)
    ans = min(ans, dp[n][i]);

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