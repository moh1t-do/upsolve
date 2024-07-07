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
    vector<int> vec(n);
    for (auto &e : vec)
        cin >> e;
    // /INPUT

    unordered_map<int, int> mp;
    int cnt = 0;
    for (auto e : vec)
    {
        mp[e]++;
        if (k % 2 == 0)
            cnt += mp[k / 2];
        cnt += mp[k - e] + mp[e - k];
    }
    cout << cnt << endl;
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