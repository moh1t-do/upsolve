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
    unordered_set<int> s(vec.begin(), vec.end()), t;
    for (auto e : s)
    {
        for (auto f : s)
            t.insert(e + f);
    }

    int res = 0;
    for (auto e : t)
    {
        multiset<int> ms;
        int j = 0, tres = 0;
        while (j < n)
        {
            int fnd = e - vec[i];
            auto p = ms.find(fnd);
            if (p != ms.end())
            {
                ms.erase(p);
                tres++
            }
            else
                ms.insert(vec[j]);
            j++;
        }
        res = max(res, tres);
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