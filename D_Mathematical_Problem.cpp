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

    if (n <= 2)
    {
        cout << stoi(s) << endl;
        return;
    }

    int f = s.find('0');
    if (f != string::npos)
    {
        if (n == 3 && f == 1)
        {
            int a = stoi(s.substr(0, 1)),
                b = stoi(s.substr(2, 1));
            cout << min(a + b, a * b) << endl;
        }
        else
            cout << 0 << endl;
        return;
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '1')
            sum += (s[i] - '0');
    }

    int res = 1e9;
    // cout << sum << endl;
    for (int i = 0; i < n - 1; i++)
    {
        string t = s.substr(i, 2);
        int cnt = 0;
        cnt += t[0] == '1';
        cnt += t[1] == '1';
        int ts = stoi(t) + sum - (t[0] + t[1] - '0' - '0');
        ts += cnt;
        // cout << t << " " << ts << endl;
        res = min(res, ts);
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