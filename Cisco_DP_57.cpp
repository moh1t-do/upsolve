#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    // /INPUT
    vector<vector<int>> dp(n + 1, vector<int>(m + 1));
    dp[1][1] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            dp[i][j] += dp[i - 1][j] + dp[i][j - 1] + dp[i - 1][j - 1];
    }

    cout << dp[n][m] << endl;
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