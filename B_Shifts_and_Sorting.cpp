#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    // /INPUT

    int f = -1,
        zeros = 0;

    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (f == -1 && s[i] == '1')
            f = i;

        if (f != -1 && s[i] == '0')
        {
            // cout << f << " " << i << endl;
            res = res + (i - f + 1 - zeros);
            // cout << res << endl;
            zeros++;
        }
    }

    cout << res << endl;
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