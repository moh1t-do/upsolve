#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    // /INPUT

    int req = k * (k + 1) / 2 + k - 1;

    if (n >= req)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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