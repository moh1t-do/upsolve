#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;
    // /INPUT

    if (x < 50)
        cout << "Z" << endl;
    else
    {
        if (y < 50)
            cout << "F" << endl;
        else
            cout << "A" << endl;
    }
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