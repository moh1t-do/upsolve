#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int x;
    cin >> x;
    // /INPUT
    int y = 1;
    int res = y;
    int tmp = 0;
    for (; y < x; y++)
    {
        if (__gcd(x, y) + y >= tmp)
        {
            tmp = __gcd(x, y) + y;
            res = y;
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