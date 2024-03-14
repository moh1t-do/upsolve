#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> ll(n), rr(m);
    for (auto &ele : ll)
        cin >> ele;
    for (auto &ele : rr)
        cin >> ele;
    // /INPUT

    int res = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (ll[i] + rr[j] <= k)
                res++;
        }
    }

    cout << res << endl;
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