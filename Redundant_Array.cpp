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

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    int ans = INT_MAX;

    for (auto x : mp)
    {
        ans = min(ans, (n - x.second) * x.first);
    }

    if (ans > n)
    {
        cout << n << endl;
        return;
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