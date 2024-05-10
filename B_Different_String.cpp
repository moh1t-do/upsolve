#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    string s;
    cin >> s;
    // /INPUT

    int n = s.size();
    int idx = -1;
    for (int i = 1; i < n; i++)
        if (s[0] != s[i])
        {
            idx = i;
            break;
        }

    if (idx == -1)
        cout << "NO" << endl;
    else
    {
        swap(s[0], s[idx]);
        cout << "YES" << endl;
        cout << s << endl;
    }
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

/*
answer YES will only be possible if there are more than one distinct characters
*/