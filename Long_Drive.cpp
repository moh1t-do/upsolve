#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int a, b;
    cin >> a >> b;
    double res = 10.0 * (b - a) / (100 - b);
    int c = (int)(res);
    if (res > c)
        c++;
    cout << c << endl;
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