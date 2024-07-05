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

    vector<int> dp(n + 1, 1e9);
    dp[0] = 0;
    dp[1] = a[1];

    for (int i = 2; i <= n; i++)
    {
        int s1 = a[i], s2 = b[i];
        for (int j = i; j >= 1; j--)
        {
            if (j != i)
                dp[i] = min(dp[i], s2 + dp[j - 1]);
            dp[i] = min(dp[i], s1 + dp[j - 1]);
            s1 += a[j - 1], s2 += b[j - 1];
        }
    }

    for (int i = 1; i <= n; i++)
        cout << dp[i] << " ";
    cout << endl;

    cout << dp[n] << endl;
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