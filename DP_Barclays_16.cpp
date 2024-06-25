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

    vector<vector<int>> dp(n + 1, vector<int>(2));
    // dp[i][j] : max salary on day i by performing jth task

    dp[1][0] = a[1];
    dp[1][1] = b[1];

    for (int i = 2; i <= n; i++)
    {
        dp[i][0] = a[i] + max(dp[i - 1][0], dp[i - 1][1]);
        dp[i][1] = b[i] + max(dp[i - 2][0], dp[i - 2][1]);
    }

    cout << max({dp[n][0], dp[n][1]}) << endl;
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