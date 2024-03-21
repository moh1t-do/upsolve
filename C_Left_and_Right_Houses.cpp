#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{
    int n;
    string str;
    cin >> n >> str;
    vector<int> left(n + 1), right(n + 1);
    // /INPUT

    for (int i = 0; i < n; i++)
    {
        if (str[i] == '0')
            left[i + 1]++;
        left[i + 1] += left[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (str[i] == '1')
            right[i]++;
        right[i] += right[i + 1];
    }

    int res;
    double tmp;
    res = 0, tmp = 1e9;
    for (int i = 0; i <= n; i++)
    {
        if (left[i] >= (i / 2.0) && right[i] >= (n - i) / 2.0)
        {
            if (abs((n / 2.0) - i) < tmp)
            {
                res = i;
                tmp = abs((n / 2.0) - i);
            }
        }
    }
    cout << res << endl;
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