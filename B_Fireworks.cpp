#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{
    using LL = long long;
    LL a, b, m;
    cin >> a >> b >> m;
    // /INPUT

    cout << 2 + (m / a) + (m / b) << endl;
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