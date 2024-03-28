#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    // /INPUT

    if (a >= b)
    {
        if (a >= b + 10)
            cout << 0 << endl;
        else
            cout << ceil((10 - (a - b)) / 3.0) << endl;
    }
    else
        cout << ceil((10 + (b - a)) / 3.0) << endl;
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