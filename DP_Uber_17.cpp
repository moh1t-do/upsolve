#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n; int N = n + 1;
    vector<int> a(N), b(N);
    for (int i = 1; i < N; i++)
        cin >> a[i];
    for (int i = 1; i < N; i++)
        cin >> b[i];
    // /INPUT

    vector<vector<int>> even(N, vector<int>(2));
    vector<vector<int>> odd = even;
    // even[i][j] : number of even journey till index i ending j array

    even[1][0] = a[1] % 2 == 0;
    even[1][1] = b[1] % 2 == 0;
    odd[1][0] = a[1] % 2;
    odd[1][1] = b[1] % 2;

    for (int i = 2; i < N; i++)
    {
        if (a[i] % 2)
        {
            odd[i][0] = even[i - 1][0] + even[i - 1][1];
            even[i][0] = odd[i - 1][0] + odd[i - 1][1];
        }
        else
        {
            even[i][0] = even[i - 1][0] + even[i - 1][1];
            odd[i][0] = odd[i - 1][0] + odd[i - 1][1];
        }

        if (b[i] % 2)
        {
            odd[i][1] = even[i - 1][0] + even[i - 1][1];
            even[i][1] = odd[i - 1][0] + odd[i - 1][1];
        }
        else
        {
            even[i][0] = even[i - 1][0] + even[i - 1][1];
            odd[i][0] = odd[i - 1][0] + odd[i - 1][1];
        }
    }

    cout << "even : " << even[n][0] + even[n][1] << endl;
    cout << "odd  : " << odd[n][0] + odd[n][1] << endl;
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