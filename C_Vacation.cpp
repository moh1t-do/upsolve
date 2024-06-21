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
    vector<array<int, 3>> hp(n);
    for (auto &row : hp)
    {
        for (auto &e : row)
            cin >> e;
    }
    // /INPUT
    array<int, 3> dp, pr;
    dp[0] = hp[0][0], dp[1] = hp[0][1], dp[2] = hp[0][2];
    pr = dp;

    if (n == 1)
    {
        cout << max({hp[0][0], hp[0][1], hp[0][2]}) << endl;
        return;
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int p = 0;
            for (int k = 0; k < 3; k++)
            {
                if (k != j)
                    p = max(p, pr[k]);
            }
            dp[j] = p + hp[i][j];
        }
        pr = dp;
    }

    cout << max({dp[0], dp[1], dp[2]}) << endl;
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