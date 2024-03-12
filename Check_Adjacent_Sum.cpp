#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> vec(n);
    for (auto &ele : vec)
        cin >> ele;
    // /INPUT

    int s = 2 * accumulate(vec.begin(), vec.end(), 0);

    while (q--)
    {
        int x;
        cin >> x;

        unordered_map<int, int> ump;
        int ii, jj, t;
        t = s - x;
        ii = jj = -1;
        for (int i = 0; i < n; i++)
        {
            if (ump[t - vec[i]])
            {
                ii = ump[t - vec[i]] - 1;
                jj = i;
                break;
            }
            ump[vec[i]] = i + 1;
        }

        if (ii == -1 && jj == -1)
            cout << -1 << endl;
        else
        {
            cout << vec[ii] << " ";
            for (int i = 0; i < n; i++)
                if (i != ii && i != jj)
                    cout << vec[i] << " ";
            cout << vec[jj] << endl;
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