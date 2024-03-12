#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{
    using LL = long long;
    LL n;
    cin >> n;
    // /INPUT

    LL x = n / 2;
    LL res = x * (x + 1);

    if (n % 2 == 0)
        cout << res << endl;
    else
        cout << res + x + 1 << endl;
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