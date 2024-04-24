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
    {
        cin >> e;
        e %= k;
    }
    // /INPUT

    sort(vec.begin(), vec.end());
    int ans = vec.back() - vec.front();
    int prv = vec.front();
    for (int i = 1; i < n; i++)
    {
        prv += k;
        ans = min(ans, prv - vec[i]);
        prv = vec[i];
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