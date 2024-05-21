#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long
#define pn cout << "NO" << endl

void solve()
{
    int n;
    string str;
    cin >> n >> str;
    // /INPUT

    int x, y;
    x = y = 0;
    for (auto &e : str)
    {
        if (e == 'N')
            y++;
        else if (e == 'S')
            y--;
        else if (e == 'E')
            x++;
        else
            x--;
    }

    if (abs(x) % 2 == 1 || abs(y) % 2 == 1)
        pn;
    else if (n == 2 && x == 0 && y == 0)
        pn;
    else
    {
        string res;
        vector<char> g{'H', 'R'};
        int n, s, e, w;
        n = s = 0;
        e = w = 1;
        for (auto &el : str)
        {
            if (el == 'N')
                res.push_back(g[n]), n = 1 - n;
            else if (el == 'S')
                res.push_back(g[s]), s = 1 - s;
            else if (el == 'E')
                res.push_back(g[e]), e = 1 - e;
            else
                res.push_back(g[w]), w = 1 - w;
        }
        cout << res << endl;
    }
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
APPROACH
case when answer is NO.
can't equally distribute moves between R and H
when n is 2 and 'EW' or 'NS'

to equally distribute
N S : R and switch
E W : H and switch
*/