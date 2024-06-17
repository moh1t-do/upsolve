#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()
vector<bool> prime;
vector<int> pnum;

void func()
{
    int d = 1e5;
    prime.resize(d + 1, true);
    prime[0] = prime[1] = 0;
    for (int p = 2; p * p <= d; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= d; i += p)
                prime[i] = false;
        }
    }

    for (int i = 3; i <= d; i++)
    {
        if (prime[i])
            pnum.push_back(i);
    }
}

void solve()
{
    int n;
    cin >> n;
    // /INPUT
    n = n - 4;

    for (auto &e : pnum)
    {
        int f = n - (e * e);
        if (f <= 0)
            break;
        int p = sqrt(f);
        if (p > 2 && p * p == f && p != e && prime[p])
        {
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
}

int32_t main()
{
    fast;
    int t{1};
    cin >> t;
    func();
    while (t--)
        solve();

    return 0;
}