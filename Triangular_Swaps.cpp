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
    // /INPUT

    int res = n - 2, f = 0;
    for (int i = 0; i + 2 < n; i++)
    {
        if (s[i] == s[i + 1] && s[i + 1] == s[i + 2])
        {
            f = 1;
            res--;
        }
        else if (i + 3 < n && s[i] == s[i + 1] && s[i] == s[i + 3] && s[i + 1] == s[i + 3])
            res--;
    }
    cout << res + f << endl;
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