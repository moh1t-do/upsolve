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
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    // /INPUT
    // vector<int> dp(n + 1);
    // dp[0] = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     int sum = arr[i];
    //     for (int j = i; j >= 1 && sum <= k; j--)
    //     {
    //         dp[i] += dp[j - 1];
    //         sum += arr[j - 1];
    //     }
    // }

    vector<vector<int>> dp(n + 1, vector<int>(k + 1));
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += arr[i];
        if (sum <= k)
            dp[i][1] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int par = 2; par <= k; par++)
        {
            int sum = arr[i];
            for (int j = i; j >= 1 && sum <= k; j--)
            {
                dp[i][par] += dp[j - 1][par - 1];
                sum += arr[j - 1];
            }
        }
    }

    cout << dp[n][k] << endl;
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