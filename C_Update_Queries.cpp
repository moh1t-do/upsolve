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

    string s;
    cin >> s;

    map<int, int> mp;

    vector<int> a(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    string q;
    cin >> q;

    sort(q.begin(), q.end());

    int i = 0;

    for (auto x : mp)
    {
        s[x.first - 1] = q[i];
        i++;
    }

    cout << s << endl;
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