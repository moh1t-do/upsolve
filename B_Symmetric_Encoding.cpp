#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int n;
    string str;
    cin >> n >> str;
    // /INPUT

    string res;
    string s = str;
    unordered_map<char, int> mp1;
    unordered_map<int, char> mp2;
    sort(s.begin(), s.end());
    mp1[s[0]] = 0;
    mp2[0] = s[0];

    int idx = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
            continue;
        mp1[s[i]] = idx;
        mp2[idx] = s[i];
        idx++;
    }

    int sz = mp1.size();
    for (int i = 0; i < n; i++)
        res.push_back(mp2[sz - mp1[str[i]] - 1]);

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