#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    // /INPUT

    multiset<int> ms;
    for (int i = 0; i < c; i++)
        ms.insert(0);

    for (int i = 0; i < b; i++)
    {
        if (ms.empty())
        {
            cout << -1 << endl;
            return;
        }
        int x = *ms.begin();
        ms.erase(ms.begin());
        ms.insert(x + 1);
    }

    for (int i = 0; i < a; i++)
    {
        if (ms.size() < 2)
        {
            cout << -1 << endl;
            return;
        }
        ms.erase(ms.begin());
        int x = *ms.begin();
        ms.erase(ms.begin());
        ms.insert(x + 1);
    }

    if (ms.size() == 1)
        cout << *ms.begin() << endl;
    else
        cout << -1 << endl;
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