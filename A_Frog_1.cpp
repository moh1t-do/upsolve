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
    vector<int> h(n), dp(n);
    for (auto &e : h)
        cin >> e;

    // /INPUT
    if (n == 0)
    {
        cout << 0 << endl;
        return;
    }

    dp[0] = 0;
    dp[1] = abs(h[0] - h[1]);

    for (int i = 2; i < n; i++)
    {
        int c1 = dp[i - 1] + abs(h[i] - h[i - 1]),
            c2 = dp[i - 2] + abs(h[i] - h[i - 2]);
        dp[i] = min(c1, c2);
    }

    cout << dp[n - 1] << endl;
}

int32_t main()
{
    fast;
    int t{1};
    // cin >> t;
    while (t--)
        solve();

    return 0;
}