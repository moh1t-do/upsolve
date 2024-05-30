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
    // /INPUT

    int c1 = 0, c2 = 0;
    if (s[0] == '1')
        c1++;
    if (s[1] == '1')
        c1++;
    if (s[2] == '1')
        c2++;
    if (s[3] == '1')
        c2++;

    int res = 0;
    if (c1 > c2)
        swap(c1, c2);
    if (c1 == 0)
        res = 10 * c2 + 1;
    else
        res = (10 * c1 + 1) * (10 * c2 + 1);
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