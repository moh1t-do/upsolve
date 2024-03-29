#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<vector<char>> vec(n, vector<char>(n, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> vec[i][j];
    }
    // /INPUT

    for (int i = 0; i < n; i++)
    {
        int idx = -1;
        for (int j = 0; j < n; j++)
        {
            if (vec[i][j] == '1')
            {
                idx = j;
                break;
            }
        }

        if (idx != -1)
        {
            if (vec[i][idx + 1] == '1' && vec[i + 1][idx] == '1' && vec[i + 1][idx + 1] == '1')
                cout << "SQUARE" << endl;
            else
                cout << "TRIANGLE" << endl;
            return;
        }
    }
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