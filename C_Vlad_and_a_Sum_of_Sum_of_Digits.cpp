#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
#define int long long

vector<int> dp;
int sumDigit(int n)
{
    int res = 0;
    while (n > 0)
    {
        int d = n % 10;
        res += d;
        n /= 10;
    }
    return res;
}

void pre()
{
    dp.push_back(1);
    for (int i = 2; i <= 2 * 1e5; i++)
    {
        int x = dp.back() + sumDigit(i);
        dp.push_back(x);
    }
}

void solve()
{
    int n;
    cin >> n;
    // /INPUT
    cout << dp[n - 1] << endl;
}

int32_t main()
{
    fast;
    int t{1};
    cin >> t;
    pre();
    while (t--)
        solve();

    return 0;
}