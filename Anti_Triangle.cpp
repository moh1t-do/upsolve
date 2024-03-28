#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{
    int n, l;
    cin >> n >> l;
    // /INPUT

    vector<int> res1, res2;
    int diff = abs(l) + 1;

    int x = l / 2,
        y = x - 1;

    while (res1.size() < n && y > 0)
    {
        res1.push_back(y);
        y--;
    }

    int curr = l;
    while (res2.size() < n)
    {
        res2.push_back(curr);
        curr += diff;
    }

    if (res1.size() == n)
    {
        for (auto &ele : res1)
            cout << ele << " ";
    }
    else
    {
        for (auto &ele : res2)
            cout << ele << " ";
    }
    cout << endl;
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