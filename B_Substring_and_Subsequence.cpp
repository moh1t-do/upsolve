#include <bits/stdc++.h>
#define f                             \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define ll long long

void solve()
{
    string a, b;
    cin >> a >> b;
    int x = a.size(), y = b.size(), res = y;

    int s = 0;
    while (s < y)
    {
        int c = s, i2 = s;
        int i1 = 0;
        while (i1 < x)
        {
            if (a[i1] == b[i2])
            {
                i2++;
                if (i2 == y)
                    break;
            }
            i1++;
        }
        res = min(c + y - i2, res);
        s++;
    }

    cout << res + x << endl;
}

int main()
{
    f;
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
