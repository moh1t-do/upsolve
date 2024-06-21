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
    vector<int> fare(n);
    for (auto &e : fare)
        cin >> e;
    // /INPUT

    vector<int> dp(n);
    dp[0] = 0;
    dp[1] = abs(fare[0] - fare[1]);
    dp[2] = dp[1] + abs(fare[1] - fare[2]);

    for (int i = 3; i < n; i++)
    {
        int a = abs(fare[i] - fare[i - 1]) + dp[i - 1],
            b = abs(fare[i] - fare[i - 3]) + dp[i - 3];
        dp[i] = min(a, b);
    }

    cout << dp[n - 1] << endl;
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