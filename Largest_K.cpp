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
    vector<int> v(n);
    map<int, int> mp;
    for (auto &e : v)
    {
        cin >> e;
        mp[e]++;
    }
    // /INPUT
    vector<int> h;
    for (auto it = mp.begin(); it != mp.end(); it++)
        h.push_back(it->second);
    
    sort(h.rbegin(), h.rend());
    int res = 0, sum = 0;
    for (int i = 0; i < h.size(); i++)
    {
        sum += h[i];
        int left = sum - (i + 1);
        res = max(res, i + 1 + (left / (i + 1)) * (i + 1));
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