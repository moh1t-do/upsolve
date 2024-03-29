#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int cnt = 0;
    for (auto &ele : s)
        if (ele == 'A')
            cnt++;
    // /INPUT

    if (cnt > 5 - cnt)
        cout << "A" << endl;
    else
        cout << "B" << endl;
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