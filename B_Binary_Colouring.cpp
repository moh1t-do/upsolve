#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int x;
    cin >> x;
    // /INPUT
    int y = x;
    vector<int> ans;
    while (y > 0)
    {
        ans.push_back(y % 2);
        y /= 2;
    }

    int n = ans.size();
    for (int i = 0; i < n; i++)
    {
        int j = i;
        if (ans[i] == 1)
            while (j < n && ans[j] == 1)
                j++;

        if (j - i > 1)
        {
            if (j == n)
                ans.push_back(1);
            else
                ans[j] = 1;
            for (int k = i + 1; k < j; k++)
                ans[k] = 0;
            ans[i] = -1;
            i = j - 1;
        }
    }

    cout << ans.size() << endl;
    for (auto &e : ans)
        cout << e << " ";
    cout << endl;
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