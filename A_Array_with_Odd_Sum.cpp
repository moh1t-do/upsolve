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
    int odd, even;
    odd = even = 0;
    for (auto &ele : vec)
    {
        cin >> ele;
        if (ele & 1)
            odd++;
        else
            even++;
    }
    // /INPUT

    // make odd;

    if (odd == 0)
        cout << "NO" << endl;
    else if (even == 0 && n % 2 == 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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