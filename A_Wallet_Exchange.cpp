#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{
    using LL = long long;
    LL a, b;
    cin >> a >> b;
    // /INPUT
    LL s = a + b;

    if (s % 2 == 0)
        cout << "Bob" << endl;
    else
        cout << "Alice" << endl;
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