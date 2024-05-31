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
    vector<int> v1(n), v2(n + 1);

    int i = 0;
    while (i < n)
    {
        cin >> v1[i];
        i++;
    }

    i = 0;
    while (i < n + 1)
    {
        cin >> v2[i];
        i++;
    }

    int ans = 1, bb = v2.back();
    bool k = false;
    int mn = 1e9;
    for (int i = 0; i < n; i++)
    {
        int a = v1[i], b = v2[i];
        if (a > b)
            swap(a, b);
        if (bb >= a && bb <= b)
            k = true;
        mn = min({mn, abs(bb - a), abs(bb - b)});
        ans += (b - a);
    }

    if (k)
        cout << ans << endl;
    else
        cout << ans + mn << endl;
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