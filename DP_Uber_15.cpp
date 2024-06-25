#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

// #define int long long

void solve()
{
    int n;
    cin >> n;
    int N = n + 1;
    vector<int> a(N), b(N);

    for (int i = 1; i < N; i++)
        cin >> a[i];
    for (int i = 2; i < N; i++)
        cin >> b[i];

    int dp[N][2][2];
    for (int i = 0; i < N; i++)
    {
        dp[i][0][0] = 0;
        dp[i][0][1] = 0;
        dp[i][1][0] = 0;
        dp[i][1][1] = 0;
    }
    // /INPUT
    // dp[i][j][k] : best ans till index i, such that current ele is j and prev is k
    for (int i = 2; i < N; i++)
    {
        dp[i][0][0] = a[i] + a[i - 1] + max(dp[i - 2][1][0], dp[i - 2][1][1]);
        dp[i][0][1] = a[i] + b[i - 1] + max({dp[i - 2][0][0], dp[i - 2][0][1], dp[i - 2][1][0]});
        dp[i][1][0] = b[i] + a[i - 1] + max({dp[i - 2][1][1], dp[i - 2][0][1], dp[i - 2][1][0]});
        dp[i][1][1] = b[i] + b[i - 1] + max(dp[i - 2][0][1], dp[i - 2][0][0]);
    }

    cout << max({dp[n][0][0], dp[n][0][1], dp[n][1][0], dp[n][1][1]}) << endl;
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