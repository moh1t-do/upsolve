#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> vec(n);
    unordered_map<int, int> ump;
    for (auto &e : vec)
    {
        cin >> e;
        ump[e]++;
    }
    // /INPUT

    priority_queue<pair<int, int>> pq;
    for (auto &e : ump)
        pq.push({e.second, e.first});

    int res = 0;
    int rem = 0;
    while (!pq.empty())
    {
        auto t = pq.top();
        pq.pop();

        if (t.first + rem >= k)
            rem = k - 1;
        else
        {
            res = res + rem + t.first;
            rem = 0;
        }
    }

    cout << res + rem << endl;
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