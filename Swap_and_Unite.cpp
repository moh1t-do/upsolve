#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{
    string str;
    cin >> str;
    // /INPUT

    unordered_map<int, int> ump;
    for (auto &ele : str)
        ump[ele]++;

    int res = 1e9;
    for (auto &ele : ump)
    {
        int e = ele.first,
            f = ele.second;

        int i, j, cnt;
        i = j = cnt = 0;

        while (i < str.size())
        {
            if (str[i] == e)
                cnt++;
            if (i - j + 1 == f)
            {
                res = min(res, f - cnt);
                if (str[j] == e)
                    cnt--;
                j++;
            }
            i++;
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