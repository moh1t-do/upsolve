#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

int func(int n, vector<int> &dp)
{
    if (n == 1)
        return 0;

    if (dp[n] != -1)
        return dp[n];

    int a, b, c;
    a = 1e9, b = 1e9;
    if (n % 3 == 0)
        a = 1 + func(n / 3, dp);
    if (n % 2 == 0)
        b = 1 + func(n / 2, dp);
    c = 1 + func(n - 1, dp);

    return dp[n] = min({a, b, c});
}

void solve()
{
    int n;
    cin >> n;
    // /INPUT
    vector<int> dp(n + 1, -1);
    cout << func(n, dp) << endl;
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