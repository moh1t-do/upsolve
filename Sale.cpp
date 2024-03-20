#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
#define LL long long int
void solve()
{
    int n;
    cin >> n;
    vector<LL> vec(n);
    for (auto &ele : vec)
        cin >> ele;
    // /INPUT

    LL res, sum;
    res = sum = 0;
    for (int i = 0; i < n; i++)
    {
        LL tmp = (2 * vec[i] + sum);
        res = max(res, tmp);
        sum += vec[i];
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