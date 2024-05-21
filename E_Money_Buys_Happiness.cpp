#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

int func(vector<int> &c, vector<int> &hpp, int m, int x, int i, int s, int ch, vector<vector<int>> &dp, vector<vector<int>> &hs)
{
    if (i == m - 1)
        return s >= c[i] ? hpp[i] : 0;

    if (dp[i][ch] != -1 && hs[i][ch] >= s)
        return dp[i][ch];

    int p = 0, np;
    if (s >= c[i])
        p = hpp[i] + func(c, hpp, m, x, i + 1, s - c[i] + x, hpp[i] + ch, dp, hs);
    np = func(c, hpp, m, x, i + 1, s + x, ch, dp, hs);

    hs[i][ch] = s;

    return dp[i][ch] = max(p, np);
}

void solve()
{
    int m, x;
    cin >> m >> x;
    vector<int> hpp(m), cst(m);
    int sum = 1;
    for (int i = 0; i < m; i++)
    {
        cin >> cst[i] >> hpp[i];
        sum += hpp[i];
    }

    // /INPUT
    vector<vector<int>> dp(m, vector<int>(sum, -1));
    vector<vector<int>> hs(m, vector<int>(sum));
    cout << func(cst, hpp, m, x, 0, 0, 0, dp, hs) << endl;
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

/*
Reduction from 3D dp to 2dp
look for changing paramater, and see the constraints
make the dp table according to the varaibles for safety
*/