#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int int32_t

void solve()
{
    int n;
    cin >> n;
    // /INPUT

    int cnt = 1;
    vector<int> res;
    while (n > 0)
    {
        int d = n % 10;
        if (d != 0)
            res.push_back(d * cnt);
        cnt *= 10;
        n /= 10;
    }

    cout << res.size() << endl;
    for (auto &ele : res)
        cout << ele << " ";
    cout << endl;
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