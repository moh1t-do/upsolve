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
    // /INPUT

    bool k = false;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 1)
            k = !k;
        for (int j = 0; j < m; j++)
        {
            if (i % 2 == 0)
                cout << '#';
            else
            {
                if (k && j == m - 1)
                    cout << '#';
                else if (!k && j == 0)
                    cout << '#';
                else
                    cout << '.';
            }
        }

        cout << endl;
    }
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