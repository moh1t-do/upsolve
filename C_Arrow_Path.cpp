#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define PY cout << "YES" << endl
#define PN cout << "NO" << endl

void solve()
{
    int n;
    cin >> n;
    vector<vector<char>> vec(2, vector<char>(n));
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> vec[i][j];
    }
    // /INPUT

    if (vec[1][n - 2] == '<')
    {
        PN;
        return;
    }

    int x = 1, y = n - 2;
    while (y > 0)
    {
        if (vec[(x + 1) % 2][y - 1] == '>')
        {
            x = (x + 1) % 2;
            y = y - 1;
        }
        else if (y >= 2 && vec[x][y - 2] == '>')
            y = y - 2;
        else
        {
            PN;
            return;
        }
    }
    PY;
}

int main()
{
    fast;
    int t{1};
    cin >> t;
    while (t--)
        solve();

    return 0;
}