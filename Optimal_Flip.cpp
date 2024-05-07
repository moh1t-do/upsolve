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

    int p = -1, s = n;
    vector<int> prefix(n), suffix(n);
    for (int i = 0; i < n; i++)
    {
        if (vec[i] % 2 == 0)
            p = i;
        prefix[i] = p;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (vec[i] % 2 == 0)
            s = i;
        suffix[i] = s;
    }

    int cnt = 0, g = 0;
    for (int i = 0; i < n; i++)
    {
        if (prefix[i] != i)
            cnt++;
        else
        {
            g += (cnt * (cnt + 1)) / 2;
            cnt = 0;
        }
    }

    if (cnt > 0)
        g += (cnt * (cnt + 1)) / 2;

    int res = 1e9;
    for (int i = 0; i < n; i++)
    {
        if (prefix[i] != i)
        {
            int tlen = (suffix[i] - prefix[i] - 1);
            int tsub = (tlen * (tlen + 1)) / 2;

            int lenlsub = (i - (prefix[i] + 1));
            int lenrsub = (suffix[i] - i - 1);

            int tnsub = (lenlsub * (lenlsub + 1)) / 2 + (lenrsub * (lenrsub + 1)) / 2;

            int tans = tsub - tnsub;
            res = min(res, g - tans);
        }
    }

    if (res == 1e9)
        cout << n * (n + 1) / 2 << endl;
    else
        cout << (n * (n + 1)) / 2 - res << endl;
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