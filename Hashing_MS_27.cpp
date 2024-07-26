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
    vector<vector<int>> vec(y);
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        vec[i % y].push_back(z);
    }
    // /INPUT

    int res = 1e9;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i].size() < x)
            continue;
        int sum = 0;
        
        for (int j = 0; j < x; j++)
            sum += vec[i][j];

        res = min(res, sum);
        for (int j = x; j < vec[i].size(); j++)
        {
            sum = sum - vec[i][j - x] + vec[i][j];
            res = min(res, sum);
        }
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