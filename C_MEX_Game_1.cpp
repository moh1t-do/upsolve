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
    unordered_map<int, int> ump;
    for (auto &ele : vec)
    {
        cin >> ele;
        ump[ele]++;
    }
    // /INPUT

    int cnt = 0;
    sort(vec.begin(), vec.end());
    vector<int> tmp;
    for (auto &ele : vec)
    {
        if (ele == cnt)
            cnt++;
        if (ump[ele] == 1)
            tmp.push_back(ele);
    }
    sort(tmp.begin(), tmp.end());
    if (tmp.size() > 1)
        cout << min(cnt, tmp[1]) << endl;
    else
        cout << cnt << endl;
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