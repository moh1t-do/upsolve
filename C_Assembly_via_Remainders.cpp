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
    vector<int> vec(n - 1);
    for (auto &e : vec)
        cin >> e;
    // /INPUT

    vector<int> res(n);
    res.back() = 1e9;

    for (int i = n - 2; i >= 0; i--)
        res[i] = res[i + 1] - vec[i];

    for (auto &e : res)
        cout << e << " ";
    cout << endl;
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
