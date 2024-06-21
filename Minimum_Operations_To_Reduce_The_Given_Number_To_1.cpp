#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;
    // /INPUT

    queue<int> q;
    q.push(n);
    int res = 0;
    while (!q.empty())
    {
        int sz = q.size();
        while (sz--)
        {
            int f = q.front();
            q.pop();
            if (f == 1)
            {
                cout << res << endl;
                return;
            }
            q.push(f - 1);

            if (f % 7 == 0)
                q.push(f / 7);
        }
        res++;
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