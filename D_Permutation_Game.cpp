#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

int findMax(int n, int k, vector<int> &p, vector<int> &a, int curr)
{
    int ans, sum;
    ans = sum = 0;
    vector<bool> vis(n, false);

    while (!vis[curr] && k > 0)
    {
        vis[curr] = 1;
        ans = max(ans, sum + (k * a[curr]));
        sum += a[curr];
        k--;
        curr = p[curr] - 1;
    }

    return ans;
}

void solve()
{
    int n, k, pb, ps;
    cin >> n >> k >> pb >> ps;
    vector<int> p(n), a(n);
    for (auto &e : p)
        cin >> e;
    for (auto &e : a)
        cin >> e;
    // /INPUT

    int sb = findMax(n, k, p, a, pb - 1);
    int ss = findMax(n, k, p, a, ps - 1);

    if (sb == ss)
        cout << "Draw" << endl;
    else if (sb > ss)
        cout << "Bodya" << endl;
    else
        cout << "Sasha" << endl;
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