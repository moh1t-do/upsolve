#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    // /INPUT

    if (a >= n)
        cout << "Alice" << endl;
    else
    {
        if (a > b)
            cout << "Alice" << endl;
        else if (b > a)
            cout << "Bob" << endl;
        else
        {
            if (n % (a + 1) == 0)
                cout << "Bob" << endl;
            else
                cout << "Alice" << endl;
        }
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