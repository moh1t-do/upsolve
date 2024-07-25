#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

bool func(int ws, int k, vector<int> &v)
{
    int n = v.size(), cnt = 0;
    for (int i = 1; i < ws; i++)
        cnt += v[i] - v[i - 1] - 1;

    if (cnt <= k)
        return 1;
    for (int i = k; i < n; i++)
    {
        cnt += v[i] - v[i - 1] - 1;
        cnt -= (v[i - ws + 1] - v[i - ws] - 1);
        if (cnt <= k)
            return 1;
    }
    return 0;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]].push_back(i);
    }
    // /INPUT

    int fres = 0;
    for (auto e : mp)
    {
        vector<int> vv = e.second;
        int left = 1, right = vv.size();
        int res = 0;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (func(mid, k, vv))
            {
                res = mid;
                left = mid + 1;
            }
            else
                right = mid - 1;
        }
        fres = max(fres, res);
    }

    cout << fres << endl;
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