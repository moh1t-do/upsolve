#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    // /INPUT

    for (int i = n; i > m; i--)
        cout << i << " ";
    for (int i = 1; i <= m; i++)
        cout << i << " ";
    cout << endl;
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