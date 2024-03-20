#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{
    using LL = long long;
    LL n;
    cin >> n;
    vector<LL> vec(n);
    for (auto &ele : vec)
        cin >> ele;
    // /INPUT

    map<LL, LL> mp;
    LL res = 0;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] > 1 && (3 * vec[i]) % (vec[i] - 1) == 0)
            res += mp[(3 * vec[i]) / (vec[i] - 1)];
        mp[vec[i]]++;
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