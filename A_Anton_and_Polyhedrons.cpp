#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    unordered_map<string, int> ump;
    ump["Tetrahedron"] = 4;
    ump["Cube"] = 6;
    ump["Octahedron"] = 8;
    ump["Dodecahedron"] = 12;
    ump["Icosahedron"] = 20;
    int n, res;
    cin >> n;
    res = 0;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        res += ump[str];
    }
    // /INPUT

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