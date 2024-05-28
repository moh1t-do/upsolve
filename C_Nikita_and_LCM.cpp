#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

// Mathematical functions
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
} //__gcd
int lcm(int a, int b) { return (a / gcd(a, b) * b); }

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &e : vec)
        cin >> e;
    // /INPUT

    int x = 1, f = 0;
    int mx = *max_element(vec.begin(), vec.end());

    for (int i = 0; i < n; i++)
    {
        x = lcm(x, vec[i]);
        if (x > mx)
        {
            cout << n << endl;
            f = 1;
            break;
        }
    }

    if (f)
        return;

    map<int, int> dp1;
    dp1[1] = 0;

    for (int i = 0; i < n; i++)
    {
        map<int, int> dp2 = dp1;
        for (auto e : dp1)
        {
            int x = e.first, y = e.second;
            int v = lcm(x, vec[i]);
            dp2[v] = max(dp2[v], y + 1);
        }
        dp1 = dp2;
    }

    int ans = 0;
    set<int> s(vec.begin(), vec.end());

    for (auto e : dp1)
    {
        int x = e.first, y = e.second;
        if (!s.count(x))
            ans = max(ans, y);
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

/*
using dp calculate max length with lcm x
put the elements of the vec into a set
iterate over the dp and return the max length of the dp which does not exist in the set
*/