#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    // /INPUT
    int l = max(0LL, n - m);
    int r = n + m;
    int ans = 0;
    for (int i = 0; i < 32; i++)
    {
        int c = r / (1LL << i);
        if (c % 2)
        {
            ans |= 1LL << i;
            continue;
        }
        int c1 = l / (1LL << i);
        if (c != c1)
            ans |= 1LL << i;
    }
    cout << ans << endl;
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