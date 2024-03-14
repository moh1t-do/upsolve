#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{
    int n, m, x;
    cin >> n >> m >> x;
    vector<pair<int, char>> vec;
    for (int i = 0; i < m; i++)
    {
        int x;
        char y;
        cin >> x >> y;
        vec.push_back({x, y});
    }
    // /INPUT

    set<int> ans{x};
    for (int i = 0; i < m; i++)
    {
        int d = vec[i].first;
        char ch = vec[i].second;

        if (ch == '0')
        {
            set<int> tans;
            for (auto &ele : ans)
            {
                int a = ele + d;
                if (a > n)
                    a -= n;
                tans.insert(a);
            }
            ans = tans;
        }
        else if (ch == '1')
        {
            set<int> tans;
            for (auto &ele : ans)
            {
                int a = ele - d;
                if (a < 1)
                    a += n;
                tans.insert(a);
            }
            ans = tans;
        }
        else
        {
            set<int> tans;
            for (auto &ele : ans)
            {
                int a = ele + d,
                    b = ele - d;
                if (a > n)
                    a -= n;
                if (b < 1)
                    b += n;
                tans.insert(a);
                tans.insert(b);
            }
            ans = tans;
        }
    }

    cout << ans.size() << endl;
    for (auto &ele : ans)
        cout << ele << " ";
    cout << endl;
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