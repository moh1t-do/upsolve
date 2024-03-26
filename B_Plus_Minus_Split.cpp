#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    // /INPUT

    int c1, c2;
    c1 = c2 = 0;
    for (auto &ele : s)
        if (ele == '+')
            c1++;
        else
            c2++;

    cout << abs(c1 - c2) << endl;
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