#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

bool func(int time, vector<int> &cache, int m)
{
    int extratime = 0;
    for (int i = 1; i <= m; i++)
    {
        if (cache[i] <= time)
            extratime += time - cache[i];
    }

    for (int i = 1; i <= m; i++)
    {
        if (cache[i] > time)
        {
            int left = cache[i] - time,
                deltime = 2 * left;
            if (deltime <= extratime)
                extratime -= deltime;
            else
                return false;
        }
    }
    return true;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> cache(n + 1);
    for (int i = 1; i <= m; i++)
    {
        int x;
        cin >> x;
        cache[x]++;
    }
    // /INPUT

    int left = 1, right = 2 * m, res = 0;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (func(mid, cache, n))
        {
            res = mid;
            right = mid - 1;
        }
        else
            left = mid + 1;
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