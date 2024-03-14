#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int c1, c2, m;
    // /INPUT

    c1 = c2 = m = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            c1++;
            c2 = 0;
        }
        else
            c2++;
        m = max(m, c2);
    }

    cout << c1 + m << endl;
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