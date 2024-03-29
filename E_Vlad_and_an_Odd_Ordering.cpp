#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;
    for (int i = 1; i <= (log2(n) + 1); i++)
    {
        ll x = pow(2, i);
        ll y = (n + (x / 2)) / x;
        if (k <= y)
        {
            ll ans = (x / 2) + ((k - 1) * x);
            cout << ans << "\n";
            return;
        }
        else
        {
            k -= y;
        }
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