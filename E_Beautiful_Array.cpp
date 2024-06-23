#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void pr(vector<int> &v)
{
    for (auto &e : v)
        cout << e << " ";
    cout << endl;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    map<int, int> mp;
    for (auto &e : vec)
    {
        cin >> e;
        mp[e]++;
        mp[e] %= 2;
    }
    // /INPUT

    vector<int> t;
    for (auto &e : mp)
    {
        if (e.second == 1)
            t.push_back(e.first);
    }

    if (vec.empty() || vec.size() == 1)
        cout << 0 << endl;
    else
    {
        int sz = vec.size();
        map<int, vector<int>> m;
        for (auto &e : t)
            m[e % k].push_back(e);

        int cnt = 0, res = 0;
        for (auto &e : m)
        {
            auto vt = e.second;
            sort(vt.begin(), vt.end());
            // pr(vt);
            if (vt.size() % 2)
                cnt++;

            if ((cnt == 1 && sz % 2 == 0) || cnt > 1)
            {
                cout << -1 << endl;
                return;
            }

            int t1, t2;
            t1 = t2 = 0;
            for (int i = 0; i < vt.size() - 1; i += 2)
                t1 += vt[i + 1] - vt[i];

            for (int i = vt.size() - 1; i >= 1; i -= 2)
                t2 += vt[i] - vt[i - 1];

            res += min(t1, t2);
            // cout << "r " << res << endl;
        }
        cout << res << endl;
    }
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