#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    // /INPUT

    int cnt = 0;
    for (auto c : s)
    {
        if (c == '1')
            cnt++;
    }

    if (cnt > k)
    {
        for (int i = 0; i < n && k > 0; i++)
        {
            if (s[i] == '1')
            {
                s[i] = '0';
                k--;
            }
        }
        cout << s << endl;
    }
    else
        cout << string(n - k, '0') << endl;
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