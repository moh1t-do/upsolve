#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

int count(string &s)
{
    int n = s.size();
    int sum = 0, res = 0;
    unordered_map<int, int> mp;
    mp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            sum--;
        else
            sum++;
        
        res += mp[sum];
        mp[sum]++;
    }

    return res;
}

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    // /INPUT

    cout << (n * (n + 1)) / 2 + count(s) << endl;
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