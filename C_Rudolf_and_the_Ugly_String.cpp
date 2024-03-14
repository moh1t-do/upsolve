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
    // map pie mapie
    s = s + "zzzz";
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        string t1, t2;
        t1 = t2 = "";
        t1 += s[i];
        t1 += s[i + 1];
        t1 += s[i + 2];
        t2 = t1;
        t1 += s[i + 3];
        t1 += s[i + 4];

        if (t1 == "mapie")
        {
            ans++;
            i += 4;
        }
        else if (t2 == "map" || t2 == "pie")
        {
            ans++;
            i += 2;
        }
    }

    cout << ans << endl;
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