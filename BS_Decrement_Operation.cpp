#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

bool func(vector<int> &v, int num, int moves)
{
    int cnt = 0;
    for (auto e : v)
        cnt += e / num + (e % num != 0);
    
    return moves >= cnt;
}

void solve()
{
    int n, moves;
    cin >> n >> moves;
    vector<int> v(n);
    for (auto &e : v)
        cin >> e;
    // /INPUT

    int left = 0, right = *max_element(v.begin(), v.end());

    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (func(v, mid, moves))
            right = mid;
        else
            left = mid + 1;
    }

    cout << left << endl;
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