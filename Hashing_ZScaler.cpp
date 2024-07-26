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
    for (int i = 0; i < n; i++)
        cin >> v[i];
    // /INPUT

    map<pair<int, int>, int> mp;
    int sum = 0, res = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        int find = sum - v[i] - v[i];
        res += mp[{v[i], find}];
        mp[{v[i], sum}]++;
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