#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (auto &e : v)
        cin >> e;
    // /INPUT

    sort(v.rbegin(), v.rend());
    int res = 0, rem = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] >= x)
        {
            rem += v[i] - x;
            res++;
        }
        else
        {
            int need = x - v[i];
            if (rem >= need)
            {
                rem -= need;
                res++;
            }
        }
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