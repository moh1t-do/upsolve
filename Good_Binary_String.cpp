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

    char pr = '0';
    vector<int> indx;
    for (int i = 0; i < n; i += 2)
    {
        if (s[i] != s[i + 1])
        {
            if (s[i] != pr)
            {
                indx.push_back(i);
                pr = s[i];
            }
            else
            {
                indx.push_back(i + 1);
                pr = s[i + 1];
            }
        }
    }

    cout << indx.size() << endl;
    for (auto &e : indx)
        cout << e + 1 << " ";
    cout << endl;
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