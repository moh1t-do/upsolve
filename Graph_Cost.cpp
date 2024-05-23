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

    int mn = vec.back(), ind = n - 1;
    vector<pair<int, int>> v(n);

    for (int i = n - 1; i >= 0; i--)
    {
        if (vec[i] <= mn)
        {
            mn = vec[i];
            ind = i;
        }
        v[i] = {mn, ind};
    }

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    int cst = 0, sum = 0;
    mn = vec[0];
    ind = 0;

    for (int i = 1; i < n; i++)
    {
        // calculate running sum for consecutive vertexs
        sum += max(vec[i], vec[i - 1]);

        // if current magnitude is smaller than previous magnitude or this no vertex has a lower magnitude than the current
        if (vec[i] < mn || vec[i] == v[i].first)
        {
            // compare
            cst += min(sum, (i - ind) * max(mn, vec[i]));
            // update
            mn = vec[i];
            ind = i;
            sum = 0;
        }
    }

    // check if it was better to go from 1 to N
    cout << min(cst, max(vec.front(), vec.back()) * (n - 1)) << endl;
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
Dijkstra will give TLE as the TC is (V+E)log(V).
Make a suffix vector of consisting of previous smaller magnitude vertex with indexs
Now for i we can either go i+1 or i+2, i+3 .... n. We will have to consider the min of the both
*/