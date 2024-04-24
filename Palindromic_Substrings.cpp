#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    // /INPUT

    int ones, zeros;
    ones = zeros = 0;
    for (auto &e : s)
        if (e == '1')
            ones++;
        else
            zeros++;

    if (n == 1)
    {
        cout << "Bob" << endl;
        return;
    }
    
    string ans;
    if (n % 2 == 0)
    {
        if (abs(ones - zeros) >= 2)
            ans = "Alice";
        else
            ans = "Bob";
    }
    else
    {
        if (abs(ones - zeros) >= 2)
            ans = "Bob";
        else
            ans = "Alice";
    }

    cout << ans << endl;
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