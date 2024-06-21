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
    vector<int> vec(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> vec[i];
    // /INPUT

    vector<int> odd(n + 1), even(n + 1);

    if (vec[1] % 2)
        odd[1] = 1;
    else
        even[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        if (vec[i] % 2)
        {
            odd[i] = even[i - 1] + even[i - 2];
            even[i] = odd[i - 1] + odd[i - 2];
        }
        else
        {
            odd[i] = odd[i - 1] + odd[i - 2];
            even[i] = even[i - 1] + even[i - 2];
        }
    }

    cout << odd[n] << endl;
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