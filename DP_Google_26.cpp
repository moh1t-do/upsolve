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
    vector<int> vec(N);
    for (int i = 1; i < N; i++)
        cin >> vec[i];
    // /INPUT

    vector<int> prefix(N);
    for (int i = 1; i < N; i++)
        prefix[i] = prefix[i - 1] + vec[i];

    vector<vector<int>> dp(N, vector<int>(N));

    // 2
    for (int i = 1; i < N - 1; i++)
        dp[i][i + 1] = vec[i] + vec[i + 1];

    for (int len = 3; len < N; len++)
    {
        for (int i = 1; i < N - len + 1; i++)
        {
            int j = i + len - 1,
                res = 1e9;
            for (int k = i; k <= j - 1; k++)
            {
                int tmp = dp[i][k] + dp[k + 1][j] + prefix[j] - prefix[i - 1];
                res = min(res, tmp);
            }
            dp[i][j] = res;
        }
    }

    cout << dp[1][n] << endl;
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