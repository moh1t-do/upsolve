#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{
    int n;
    cin >> n;
    // /INPUT

    int res = 0;
    if (n > 1)
        res = ((n / 2) + 6 * 2 * (n / 2));
    if (n & 1)
        res += 6;
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