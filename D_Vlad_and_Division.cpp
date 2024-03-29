#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int unsigned int
void solve()
{
    int n;
    cin >> n;
    multiset<int> ms;
    int res = 0;
    int tmp = 2147483647;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int inv = ~x & tmp;
        auto p = ms.find(inv);
        if (p == ms.end())
        {
            ms.insert(x);
            res++;
        }
        else
            ms.erase(p);
    }
    // /INPUT
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