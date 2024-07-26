#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int n, q;
    string s;
    cin >> n >> q >> s;
    // /INPUT
    vector<vector<int>> hsh(26, vector<int>(n + 1));

    for (int i = 0; i < n; i++)
        hsh[s[i] - 'a'][i + 1]++;

    for (int i = 0; i < 26; i++)
    {
        for (int j = 1; j <= n; j++)
            hsh[i][j] += hsh[i][j - 1];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int res = 0;
        for (int i = 0; i < 26; i++)
        {
            int d = hsh[i][r] - hsh[i][l - 1];
            res += (d * (d + 1)) / 2;
        }
        cout << res << endl;
    }
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