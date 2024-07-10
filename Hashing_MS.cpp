#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    map<int, vector<int>> days;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        days[i % y].push_back(x);
    }
    // /INPUT

    int res = 1e9;
    for (auto &e : days)
    {
        auto d = e.second;
        int i = 0, j = 0, sum = 0;
        while (j < d.size())
        {
            sum += d[j];
            if (j - i + 1 == x)
            {
                res = min(res, sum);
                sum -= d[i];
                i++;
            }
            j++;
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