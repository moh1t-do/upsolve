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
    int M = 1e9 + 7;
    dp[1][1] = 1;
    vector<int> tmp(m + 1);
    for (int i = 1; i <= n; i++)
    {
        int l = 0;
        for (int j = 1; j <= m; j++)
        {
            l += (dp[i][j - 1]) % M;
            dp[i][j] += (l + tmp[j]) % M;
            tmp[j] += dp[i][j];
        }
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