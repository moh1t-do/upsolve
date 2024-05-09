#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &e : vec)
        cin >> e;
    // /INPUT

    int mx = *max_element(vec.begin(), vec.end());
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] == 1)
            cnt += n;
        else
        {
            for (int j = 1; j <= n; j++)
            {
                int num = pow(vec[i], j);
                if (num > mx)
                    break;
                if (num <= vec[j - 1])
                    cnt++;
            }
        }
    }
    cout << cnt << endl;
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