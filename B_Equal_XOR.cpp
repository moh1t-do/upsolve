#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{
    int n, k, N;
    cin >> n >> k;
    vector<int> vec(2 * n);
    for (auto &ele : vec)
        cin >> ele;

    int c1, c2;
    c1 = c2 = 0;
    vector<int> hsh(n + 1);
    for (int i = 0; i < n; i++)
        hsh[vec[i]]++;

    int kk = 2 * k;
    for (int i = 1; i <= n && kk > 0; i++)
        if (hsh[i] == 2)
        {
            cout << i << " ";
            cout << i << " ";
            kk -= 2;
        }
    for (int i = 1; i <= n && kk > 0; i++)
        if (hsh[i] == 1)
        {
            cout << i << " ";
            kk--;
        }
    cout << endl;

    kk = 2 * k;
    for (int i = 1; i <= n && kk > 0; i++)
        if (hsh[i] == 0)
        {
            cout << i << " ";
            cout << i << " ";
            kk -= 2;
        }
    for (int i = 1; i <= n && kk > 0; i++)
        if (hsh[i] == 1)
        {
            cout << i << " ";
            kk--;
        }

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