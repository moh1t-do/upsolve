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
    vector<int> vec(n);
    for (auto &e : vec)
        cin >> e;
    // /INPUT
    int s1 = vec[0] + vec[1],
        s2 = vec[n - 1] + vec[n - 2],
        s3 = vec[0] + vec[n - 1];

    int dp[n][n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            dp[i][j][0] = dp[i][j][1] = dp[i][j][2] = 0;
    }
    for (int i = 0; i < n - 1; i++)
    {
        int sum = vec[i] + vec[i + 1];
        if (sum == s1)
            dp[i][i + 1][0] = 1;
        if (sum == s2)
            dp[i][i + 1][1] = 1;
        if (sum == s3)
            dp[i][i + 1][2] = 1;
    }

    for (int size = 3; size <= n; size++)
    {
        for (int i = 0; i < n; i++)
        {
            int j = i + size - 1;
            if (j < n)
            {
                int ss1 = vec[i] + vec[i + 1],
                    ss2 = vec[j] + vec[j - 1],
                    ss3 = vec[i] + vec[j];

                if (ss1 == s1)
                    dp[i][j][0] = max(dp[i][j][0], 1 + dp[i + 2][j][0]);

                if (ss1 == s2)
                    dp[i][j][1] = max(dp[i][j][1], 1 + dp[i + 2][j][1]);

                if (ss1 == s3)
                    dp[i][j][2] = max(dp[i][j][2], 1 + dp[i + 2][j][2]);

                if (ss2 == s1)
                    dp[i][j][0] = max(dp[i][j][0], 1 + dp[i][j - 2][0]);

                if (ss2 == s2)
                    dp[i][j][1] = max(dp[i][j][1], 1 + dp[i][j - 2][1]);

                if (ss2 == s3)
                    dp[i][j][2] = max(dp[i][j][2], 1 + dp[i][j - 2][2]);

                if (ss3 == s1)
                    dp[i][j][0] = max(dp[i][j][0], 1 + dp[i + 1][j - 1][0]);

                if (ss3 == s2)
                    dp[i][j][1] = max(dp[i][j][1], 1 + dp[i + 1][j - 1][1]);

                if (ss3 == s3)
                    dp[i][j][2] = max(dp[i][j][2], 1 + dp[i + 1][j - 1][2]);
            }
        }
    }

    cout << max(dp[0][n - 1][0], max(dp[0][n - 1][1], dp[0][n - 1][2])) << endl;
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