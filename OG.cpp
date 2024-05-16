#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;
    // /INPUT

    int x, y;
    x = n / 9;
    y = n % 9;
    cout << x * 45 + (y * (y + 1) / 2) << endl;
}

int32_t main()
{
    int t{1};
    cin >> t;
    while (t--)
        solve();

    return 0;
}