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
    vector<int> vec(n);
    for (auto &e : vec)
        cin >> e;
    // /INPUT

    sort(vec.rbegin(), vec.rend());
    int len = n / 2 + n % 2;
    int s1 = accumulate(vec.begin(), vec.begin() + len, 0);
    int s2 = accumulate(vec.begin()+len, vec.end(), 0);
    cout << s1 - s2 << endl;
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