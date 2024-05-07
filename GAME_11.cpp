#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> bat(n), bowl(m);
    for (auto &e : bat)
        cin >> e;
    for (auto &e : bowl)
        cin >> e;
    // /INPUT

    if (n < 4 || m < 4 || n + m < 11)
        cout << -1 << endl;
    else
    {
        sort(bat.rbegin(), bat.rend());
        sort(bowl.rbegin(), bowl.rend());

        int ans = 0;
        for (int i = 0; i < 4; i++)
            ans += bat[i] + bowl[i];

        int i, j, cnt = 3;
        i = j = 4;

        while (cnt)
        {
            if (i < n && j < m)
            {
                if (bat[i] >= bowl[j])
                    ans += bat[i++];
                else
                    ans += bowl[j++];
            }
            else if (i < n)
                ans += bat[i++];
            else if (j < m)
                ans += bowl[j++];
            cnt--;
        }
        cout << ans << endl;
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