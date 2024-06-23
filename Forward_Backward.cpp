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
    vector<int> vec(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> vec[i];

    vector<array<int, 2>> dp(n + 1);

    dp[1][2] = vec[1];
    dp[1][1] = 1e9;
    dp[2][2] = 1e9;
    dp[2][1] = dp[1][2] + vec[2] + vec[3];
    // /INPUT

    for (int i = 3; i < n; i++)
    {
        dp[i][1] = vec[i] + vec[i + 1] + dp[i - 1][2];
        dp[i][2] = vec[i] + min(dp[i - 2][1], dp[i - 2][2]);
    }

    dp[n][1] = 1e9;
    dp[n][2] = vec[n] + min(dp[n - 2][2], dp[n - 2][1]);

    cout << min({dp[n][2], dp[n - 1][2], dp[n - 1][1]}) << endl;
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