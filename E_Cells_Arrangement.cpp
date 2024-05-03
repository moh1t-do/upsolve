#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int N;
    cin >> N;
    cout << 1 << ' ' << 1 << '\n';
    cout << 2 << ' ' << 1 << '\n';

    for (int i = 3; i < N; i++)
        cout << 1 << ' ' << i << '\n';

    if (N >= 3)
        cout << N << ' ' << N << '\n';

    cout << '\n';
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