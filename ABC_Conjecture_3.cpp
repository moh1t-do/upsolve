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
    // /INPUT

    int ca, a, b, res;
    ca = a = b = res = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
            ca++;
        else if (s[i] == 'b')
        {
            b = 1;
            a += ca;
            ca = 0;
        }
        else
        {
            if (b == 1)
            {
                if (a == 0)
                    b = 0;
                else
                {
                    a--;
                    res++;
                }
            }
        }
    }
    cout << res << endl;
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