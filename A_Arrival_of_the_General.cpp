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
    vector<int> vec(n);
    for (auto &ele : vec)
        cin >> ele;
    // /INPUT
    int p = max_element(vec.begin(), vec.end()) - vec.begin(),
        q = min_element(vec.rbegin(), vec.rend()) - vec.rbegin();
    int res = p + q;
    if (p > n - q - 1)
        res--;
    cout << res << endl;
}

int32_t main()
{
    fast;
    int t{1};
    // cin >> t;
    while (t--)
        solve();

    return 0;
}