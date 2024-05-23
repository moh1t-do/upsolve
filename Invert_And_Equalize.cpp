#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    int c0, c1;
    c0 = c1 = 0;
    int d = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
        {
            if (s[i - 1] == '0')
                c0++;
            else
                c1++;
        }
    }

    if (s.back() == '0')
        c0++;
    else
        c1++;

    cout << min(c0, c1) << endl;
}

int32_t main()
{
    fast;
    int t{1};
    cin >> t;
    while (t--)
        solve();

    return 0;
}