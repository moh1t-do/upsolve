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
    vector<int> vec(n + 1);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> vec[i];
        sum += vec[i];
    }
    // /INPUT

    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        int d = floor(log10(vec[i])) + 1;
        res += pow(10, d) * sum + n * vec[i];
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