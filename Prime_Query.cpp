#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int n, q;
    cin >> n;
    vector<int> vec(n);
    for (auto &e : vec)
        cin >> e;
    cin >> q;
    // /INPUT

    vector<int>
        pone(n + 1),
        ptwo(n + 1);

    for (int i = 0; i < n; i++)
    {
        if (vec[i] == 1)
            pone[i + 1] = 1;
        if (vec[i] == 2)
            ptwo[i + 1] = 1;
        pone[i + 1] = pone[i + 1] + pone[i];
        ptwo[i + 1] = ptwo[i + 1] + ptwo[i];
    }

    while (q-- > 0)
    {
        int l, r, k;
        cin >> l >> r >> k;

        int p1 = pone[r] - pone[l - 1],
            p2 = ptwo[r] - ptwo[l - 1];

        int ab = (r - l + 1);
        int rem = ab - (p1 + p2);

        // p1 < p2
        if (p1 > p2)
            swap(p1, p2);

        int c = 0;
        int ar = min(k, min(rem, p2 - p1));
        p1 += ar;
        c += ar;

        if (p1 + p2 == ab)
        {
            int q = min(k - c, (p2 - p1) / 2);
            p2 -= q;
            p1 += q;
        }
        else
        {
            int diff = min(ab - (p1 + p2), k - c);
            p2 += diff / 2 + diff % 2;
            p1 += diff / 2;
        }
        cout << p1 * p2 << endl;
    }
}

int32_t main()
{
    fast;
    int t{1};
    cin >> t;
    while (t--)
        solve();

    return 0;
}