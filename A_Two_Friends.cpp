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
    for (auto &e : vec)
        cin >> e;
    // /INPUT

    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        int p = vec[i];
        if (vec[p - 1] - 1 == i)
        {
            // cout << p - 1 << " " << i << endl;
            ok = true;
        }
    }

    if (ok)
        cout << 2 << endl;
    else
        cout << 3 << endl;
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