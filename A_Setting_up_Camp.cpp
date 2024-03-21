#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    // /INPUT

    int ext = b / 3,
        left = b % 3;

    int res;
    if (left == 0)
        res = a + ext + ceil(c / 3.0);
    else
    {
        int need = 3 - left;
        if (need > c)
            res = -1;
        else
            res = a + ext + 1 + ceil((c - need) / 3.0);
    }

    cout << res << endl;
}

int main()
{
    fast;
    int t{1};
    cin >> t;
    while (t--)
        solve();

    return 0;
}