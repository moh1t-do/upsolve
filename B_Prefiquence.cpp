#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int n, m;
    string a, b;
    cin >> n >> m >> a >> b;
    // /INPUT

    int i, j;
    i = j = 0;
    while (i < n && j < m)
    {
        if (a[i] == b[j])
            i++;
        j++;
    }

    cout << i << endl;
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