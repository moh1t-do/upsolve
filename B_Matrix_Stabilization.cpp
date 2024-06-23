#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

// #define int long long

int func(vector<vector<int>> &arr, int n, int m, int i, int j)
{
    int t, b, l, r;
    t = b = l = r = -1e9;

    if (i != 0)
        t = arr[i - 1][j];

    if (i != n - 1)
        b = arr[i + 1][j];

    if (j != 0)
        l = arr[i][j - 1];

    if (j != m - 1)
        r = arr[i][j + 1];

    int mx = max({t, b, l, r});
    if (arr[i][j] > mx)
        return mx;
    return arr[i][j];
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }
    // /INPUT

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = func(arr, n, m, i, j);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
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