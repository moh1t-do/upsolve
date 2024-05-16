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
    vector<char> vec(n);
    for (auto &e : vec)
        cin >> e;
    // /INPUT

    int c = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (vec[i] == vec[i + 1])
        {
            i++;
            c++;
        }
    }
    cout << n - c << endl;
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
ideally chef can win every match, since he cannot perform the same move twice he would lose if Roku draws consecutive moves also we will have to skip the next move if there are more than two consecutive moves

RRRPSP
WLWWWW
RRRRR
WLWLW
*/