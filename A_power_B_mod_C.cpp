#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int a;
    cin >> a;
    // /INPUT

    if (a != 2)
        cout << 2 * a << " " << a * a << endl;
    else
        cout << 4 << " " << 16 << endl;
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