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
    vector<int> a(n + 1), b(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    // /INPUT

    vector<vector<int>> dp(2, vector<int>(n + 1));
    // dp[i][j] : max earning on day i on city j

    for (int i = 1; i <= n; i++)
    {
        int x = 0LL, y = 0LL;
        if (i >= 2)
        {
            x = dp[0][i - 2];
            y = dp[1][i - 2];
        }
        dp[0][i] = a[i] + max(dp[0][i - 1], y);
        dp[1][i] = b[i] + max(dp[1][i - 1], x);
    }

    cout << max(dp[0][n], dp[1][n]) << endl;
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