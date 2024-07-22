#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

bool func(vector<int> &v, int t, int k)
{
    int total = k * t;
    for (auto e : v)
    {
        if (e >= k)
            total -= k;
        else
            total -= e;
    }
    return !(total <= 0);
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> stocks(n);
    for (auto &e : stocks)
        cin >> e;
    // /INPUT

    int left = 1, right = accumulate(stocks.begin(), stocks.end(), 0);

    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (func(stocks, mid, k))
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