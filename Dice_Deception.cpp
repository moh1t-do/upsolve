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

    sort(vec.begin(), vec.end());

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (k > 0 && abs(7 - vec[i]) > vec[i])
        {
            ans += abs(7 - vec[i]);
            k--;
        }
        else
            ans += vec[i];
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