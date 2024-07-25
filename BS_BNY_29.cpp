#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void inp(vector<int> &v)
{
    for (auto &e : v)
        cin >> e;
}

bool func(int ss, int ts, int cm, int up, int sp)
{
    int left = ts - ss;
    cm += (left * sp);

    return cm >= ss * up;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> nums(n), money(n), upgrade(n), sell(n), ans(n);
    // /INPUT
    inp(nums);
    inp(money);
    inp(sell);
    inp(upgrade);

    for (int i = 0; i < n; i++)
    {
        int left = 0, right = nums[i], res = 0;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (func(mid, nums[i], money[i], upgrade[i], sell[i]))
            {
                res = mid;
                left = mid + 1;
            }
            else
                right = mid - 1;
        }
        ans[i] = res;
    }

    for (auto &e : ans)
        cout << e << " ";
    cout << endl;
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