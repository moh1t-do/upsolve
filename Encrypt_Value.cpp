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
    int M = 1e9 + 7;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
    // /INPUT

    int res = vec[0];
    for (int i = 1; i < n; i++)
    {
        if (res <= 1 && vec[i] > 1)
            res = (res + vec[i]) % M;
        else if (vec[i] <= 1)
            res = (res + vec[i]) % M;
        else
            res = (res * vec[i]) % M;
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