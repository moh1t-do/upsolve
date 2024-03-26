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

    int sl, tl, cnt;
    sl = tl = 1e9;
    cnt = 0;

    // sl < tl
    for (int i = 0; i < n; i++)
    {
        if (sl >= tl)
            swap(sl, tl);

        if (vec[i] <= sl)
            sl = vec[i];
        else if (vec[i] <= tl)
            tl = vec[i];
        else
        {
            sl = vec[i];
            cnt++;
        }
    }

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