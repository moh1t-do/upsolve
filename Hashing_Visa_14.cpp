#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> hsh(21);
    for (int i=0; i<n; i++)
    {
        int x, y;
        cin >> x >> y;
        hsh[x]++;
        hsh[y + 1]--;
    }
    // /INPUT
    for (int i = 1; i <= 20; i++)
        hsh[i] += hsh[i - 1];

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        cout << hsh[x] << " ";
    }
    cout << endl;
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