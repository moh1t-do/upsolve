#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    vector<int> vec(3);
    for (auto &e : vec)
        cin >> e;
    // /INPUT

    if ((vec[0] + vec[1] + vec[2]) % 2)
        cout << -1 << endl;
    else
    {
        int cnt = 0;
        while (vec[1] != 0)
        {
            vec[1]--;
            vec[2]--;
            sort(vec.begin(), vec.end());
            cnt++;
        }
        cout << cnt << endl;
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