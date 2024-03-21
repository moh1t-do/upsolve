#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{
    using LL = long long;
    LL m, n;
    cin >> n >> m;
    vector<LL> v1(n), v2(n);
    auto func = [](LL &ele)
    { cin >> ele; };
    for_each(v1.begin(), v1.end(), func);
    for_each(v2.begin(), v2.end(), func);
    // /INPUT
    vector<LL> mn(n), suf(n + 1);
    for (LL i = 0; i < n; i++)
        mn[i] = min(v1[i], v2[i]);

    for (LL i = n - 1; i >= 0; i--)
        suf[i] = suf[i + 1] + mn[i];

    LL res = 1e15;
    for (LL i = 0; i < m; i++)
        res = min(res, v1[i] + suf[i + 1]);
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