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
    vector<int> v(n);
    for (auto &e : v)
        cin >> e;
    // /INPUT
    unordered_map<int, int> mp;
    int res = 0;
    for (auto e : v)
    {
        int f = (k - e % k) % k;
        if (mp.find(f) != mp.end())
            res += mp[f];
        mp[e % k]++;
    }
    cout << res << endl;
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