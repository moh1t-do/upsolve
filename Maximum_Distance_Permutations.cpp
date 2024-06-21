#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;
    // /INPUT

    if (n == 1)
    {
        cout << 1 << endl;
        cout << 1 << endl;
        return;
    }

    for (int i = 1; i <= n; i++)
        cout << i << " ";
    cout << endl;

    for (int i = n / 2 + 1; i <= n; i++)
        cout << i << " ";

    for (int i = 1; i < n / 2 + 1; i++)
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