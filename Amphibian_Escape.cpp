#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int n, k, h;
    cin >> n >> k >> h;
    // /INPUT

    int ans = 0;
    for (int pow = 1; pow <= n; pow++)
    {
        if (pow >= h)
            ans += n;
        else
        {
            int s = ((pow * k) - h) / (k - 1);
            s = max(0LL, s);
            ans += s;
        }
    }
    cout << ans << endl;
}

int32_t main()
{
    fast;
    // setprecision(2);
    int t{1};
    cin >> t;
    while (t--)
        solve();

    return 0;
}