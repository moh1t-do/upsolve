#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

bool func(int sum, vector<int> &arr, int k, int i, int j)
{
    return sum > k || arr[j] - arr[i] > 1;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // /INPUT

    sort(arr.begin(), arr.end());
    int i = 0, j = 0, sum = 0, ans = 0;
    for (int j = 0; j < n; j++)
    {
        sum = sum + arr[j];
        while (func(sum, arr, k, i, j))
        {
            sum = sum - arr[i];
            i++;
        }
        if (sum > ans)
            ans = sum;
    }
    cout << ans << endl;
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