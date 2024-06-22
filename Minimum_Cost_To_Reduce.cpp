#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int n, y, x, z, b;
    cin >> n >> y >> x >> z >> b;
    // /INPUT

    vector<int> dp(n + 1);
    for (int i = 2; i <= n; i++)
    {
        int c1, c2 = 1e9, c3 = 1e9, c4 = 1e9;
        c1 = y + dp[i - 1];
        if (i % 3 == 0)
            c2 = z + dp[i / 3];
        if (i % 5 == 0)
            c3 = b + dp[i / 5];
        if (i % 7 == 0)
            c4 = x + dp[i / 7];
        dp[i] = min({c1, c2, c3, c4});
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