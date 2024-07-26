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
    vector<int> v(k);
    for (auto &e : v)
        cin >> e;

    int count = 0;
    int maxi = *max_element(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
        count += (2 * v[i] - 1);
    int ans = count - (2 * maxi - 1);
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