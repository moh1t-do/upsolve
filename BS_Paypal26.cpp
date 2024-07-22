#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

bool func(vector<int> &v, int val, int k)
{
    int cnt = 1, p = 0, n = v.size();
    for (int i = 1; i < n; i++)
    {
        if (v[i] - v[p] >= val)
        {
            cnt++;
            p = i;
        }
    }
    return cnt >= k;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &e : v)
        cin >> e;
    // /INPUT
    sort(v.begin(), v.end());
    int left = 0, right = v.back() - v.front(),
        res = 0;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (func(v, mid, k))
        {
            res = mid;
            left = mid + 1;
        }
        else
            right = mid - 1;
    }

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