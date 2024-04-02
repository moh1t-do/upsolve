#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;
    bool k = true;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
            k = false;
    }
    // /INPUT

    if (k)
        cout << "EASY" << endl;
    else
        cout << "HARD" << endl;
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