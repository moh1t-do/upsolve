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

    int res = 0;
    for (int i = 0; i < n - 2; i++)
    {
        if (vec[i + 1] > vec[i] && vec[i + 1] > vec[i + 2])
        {
            int j = i, k = i + 2, c1 = 0, c2 = 0;
            while (j >= 0 && vec[j] < vec[j + 1])
                c1++, j--;
            while (k < n && vec[k] < vec[k - 1])
                c2++, k++;
            res += c1 * c2;
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