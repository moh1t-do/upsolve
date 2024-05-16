#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

int n, m;
bool inbounds(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void solve()
{
    cin >> n >> m;
    vector<vector<int>> g(n, vector<int>(m)),
        vis(n, vector<int>(m));

    priority_queue<array<int, 3>> pq;
    int pc = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            if (s[j] == '1')
                g[i][j] = 1;
            else
            {
                g[i][j] = 0;
                pc++;
            }
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
            {
                pq.push({-1 * g[i][j], i, j});
                vis[i][j] = 1;
            }
        }
    }
    // /INPUT

    int res = 0;
    vector<int> dir{1, 0, -1, 0, 1};
    while (!pq.empty() && pc > 0)
    {
        auto [d, x, y] = pq.top();
        d = -d;
        pq.pop();
        res = d;
        if (g[x][y] == 0)
            pc--;
        if (pc <= 0)
            break;
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dir[i],
                ny = y + dir[i + 1];
            if (inbounds(nx, ny) && !vis[nx][ny])
            {
                vis[nx][ny] = 1;
                if (g[nx][ny] == 1)
                    pq.push({-(d + 1), nx, ny});
                else
                    pq.push({-d, nx, ny});
            }
        }
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

/*
calculate the count of the prisoners.
if (pris == 0) ans will be zero

apply modified dijkstra from the boundaries and
and traverse utill all the prisonsers have escaped.
if cell is guard inc the time, eles the time remains the same  
*/