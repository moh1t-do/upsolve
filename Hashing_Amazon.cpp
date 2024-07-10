#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;


void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    for (auto &e : vec)
        cin >> e;

    unordered_map<int, int> mp;
    int res = 1e9;
    for (int i = 0; i < n; i++)
    {
        int f = k - vec[i];
        if (mp.find(f) != mp.end())
            res = min(res, i - mp[f] + 1);
        mp[vec[i]] = i;
    }
    cout << res << endl;
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
