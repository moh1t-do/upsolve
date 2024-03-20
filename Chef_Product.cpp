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

    LL x = sqrtl(n);
    if ((n - x * x) % 2 == 1)
        x--;
    cout << (x + 1) / 2 << endl;
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