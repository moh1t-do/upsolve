#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

int f(int a, int b, int k)
{
    if (a * k > b)
        return b - a;

    int bn = (b / k) * k;
    if (bn != b)
        return (b - bn) + f(a, bn, k);
    return 1 + f(a, b / k, k);
}

void solve()
{
    int a, b, k;
    cin >> a >> b >> k;
    // /INPUT

    cout << f(a, b, k) << endl;
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