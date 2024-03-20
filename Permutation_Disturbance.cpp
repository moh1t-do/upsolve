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

    int res = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (vec[i] == i + 1)
        {
            swap(vec[i], vec[i + 1]);
            res++;
        }
    }
    if (vec.back() == n)
        res++;
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