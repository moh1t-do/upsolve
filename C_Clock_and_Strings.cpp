#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    // /INPUT

    if (a > b)
        swap(a, b);

    int cnt = 0;
    for (int i = a; i <= b; i++)
    {
        if (i == c || i == d)
            cnt++;
    }

    if (cnt == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
for intersection exactly one or none of the bob point will lie between a and b
*/