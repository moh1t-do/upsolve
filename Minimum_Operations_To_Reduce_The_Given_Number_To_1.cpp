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
    // /INPUT

    vector<int> dp(n + 1);
    dp[2] = 1;

    for (int i = 3; i <= n; i++)
    {
        int c1 = 1 + dp[i - 1],
            c2 = 1e9;
        if (i % 7 == 0)
            c2 = 1 + dp[i / 7];
        dp[i] = min(c1, c2);
    }
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