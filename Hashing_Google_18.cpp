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
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    // /INPUT
    unordered_map<int, int> mp;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        int f = a[a[a[i]]];
        cnt += mp[f];
        mp[f]++;
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