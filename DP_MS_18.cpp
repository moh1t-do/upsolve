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
    int N = n + 1;
    vector<vector<int>> dp(N, vector<int>(3));
    // /INPUT

    dp[0][0] = 1;
    // dp[i][j] : no. ways to make y with atleast j 4's;

    for (int i = 1; i < N; i++)
    {
        dp[i][0] += dp[i - 1][0];
        dp[i][1] += dp[i - 1][1];
        dp[i][2] += dp[i - 1][2];
        if (i >= 2)
        {
            dp[i][0] += dp[i - 2][0];
            dp[i][1] += dp[i - 2][1];
            dp[i][2] += dp[i - 2][2];
        }
        if (i >= 4)
        {
            dp[i][1] += dp[i - 4][0];
            dp[i][2] += dp[i - 4][1];
        }
        if (i >= 6)
        {
            dp[i][0] += dp[i - 6][0];
            dp[i][1] += dp[i - 6][1];
            dp[i][2] += dp[i - 6][2];
        }
    }

    cout << dp[n][0] + dp[n][1] + dp[n][2] << endl;
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