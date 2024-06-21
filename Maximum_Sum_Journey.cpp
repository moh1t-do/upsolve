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
    vector<int> vec(n), dp(n);
    for (auto &e : vec)
        cin >> e;
    // /INPUT
    dp[0] = vec[0];
    if (n == 1)
    {
        cout << vec[0] << endl;
        return;
    }

    for (int i = 1; i < n; i++)
    {
        int c1 = dp[i - 1] + vec[i],
        c2 = -1e9, c3 = -1e9;
        if (i > 3)
            c2 = dp[i - 3] + vec[i];
        if (i > 5)
            c3 = dp[i - 5] + vec[i];
        
        dp[i] = max({c1, c2, c3});
    }

    cout << dp[n-1] << endl;
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