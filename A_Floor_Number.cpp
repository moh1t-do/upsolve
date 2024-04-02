#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int n, x;
    cin >> n >> x;
    // /INPUT

    if (n <= 2)
        cout << 1 << endl;
    else
    {
        n = n - 2;
        cout << 1 + ceil((n + 0.0) / x) << endl;
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