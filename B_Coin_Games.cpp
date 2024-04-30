#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    // /INPUT

    int c = 0;
    for (auto &e : s)
        if (e == 'U')
            c++;

    if (c & 1)
        py;
    else
        pn;
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