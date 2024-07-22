#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    // /INPUT
    unordered_map<char, int> mp;
    int i = 0, j = 0, res = 0;
    while (j < n)
    {
        mp[s[j]]++;
        while (j - i + 1 > mp.size() * k)
        {
            mp[s[i]]--;
            if (mp[s[i]] == 0)
                mp.erase(s[i]);
            i++;
        }

        if (j - i + 1 == mp.size() * k)
            res++;
        j++;
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