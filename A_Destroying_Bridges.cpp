#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    // /INPUT

    if (k >= n - 1)
        cout << 1 << endl;
    else
        cout << n << endl;
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