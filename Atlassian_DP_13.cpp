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
    vector<int> dp1(n + 1), dp2(n + 1);

    for (int i = 1; i <= n; i++)
    {
        char c;
        int e;
        cin >> c >> e;

        if (c == '+')
        {
            dp1[i] = max({dp1[i - 1], dp1[i - 1] + e, dp2[i - 1] + e});
            dp2[i] = min({dp2[i - 1], dp2[i - 1] + e, dp1[i - 1] + e});
        }
        else if (c == '-')
        {
            dp1[i] = max({dp1[i - 1], dp1[i - 1] - e, dp2[i - 1] - e});
            dp2[i] = min({dp2[i - 1], dp2[i - 1] - e, dp1[i - 1] - e});
        }
        else if (c == '*')
        {
            dp1[i] = max({dp1[i - 1], dp1[i - 1] * e, dp2[i - 1] * e});
            dp2[i] = min({dp2[i - 1], dp2[i - 1] * e, dp1[i - 1] * e});
        }
        else if (c == '/')
        {
            dp1[i] = max({dp1[i - 1], dp1[i - 1] / e, (dp2[i - 1] / e)});
            dp2[i] = min({dp2[i - 1], dp2[i - 1] / e, (dp1[i - 1] / e)});
        }
        else
        {
            dp1[i] = max({dp1[i - 1], -1 * dp2[i - 1]});
            dp2[i] = min({dp2[i - 1], -1 * dp1[i - 1]});
        }

        cout << dp1[n] << endl;
    }
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