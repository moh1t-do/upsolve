#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    // /INPUT

    if (2 * b > c)
        cout << b << " " << b << " " << c << endl;
    else
        cout << b << " " << c << " " << c << endl;
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