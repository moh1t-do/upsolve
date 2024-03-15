#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &ele : vec)
        cin >> ele;
    // /INPUT

    for (int i = n - 2; i >= 0; i--)
    {
        if (vec[i + 1] >= vec[i])
            continue;

        int x, y;
        x = vec[i] / 10;
        y = vec[i] % 10;

        if (x == 0 || x > y || y > vec[i + 1])
        {
            cout << "NO" << endl;
            return;
        }
        else
        {
            vec[i] = x;
            i++;
        }
    }

    cout << "YES" << endl;
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