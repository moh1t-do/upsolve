#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long
const int M = 1e6;
vector<bool> sieve(M + 1, 1);
vector<int> primes;
void func()
{
    sieve[0] = sieve[1] = 0;
    for (int i = 2; i <= M; i++)
    {
        if (sieve[i])
        {
            for (int j = 2 * i; j <= M; j += i)
                sieve[j] = 0;
        }
    }

    for (int i = 2; i <= M; i++)
        if (sieve[i])
            primes.push_back(i);
}

void solve()
{
    int k;
    cin >> k;
    // /INPUT

    int res = 0;
    if (sieve[k])
    {
        int ans = 0;
        for (auto i : primes)
        {
            if (i <= k)
            {
                ans += i;
            }
            else
                break;
        }
        cout << ans * k << "\n";
        return;
    }
    else
    {
        int ans = 0;
        for (auto i : primes)
        {
            if (i >= k)
                break;
            ans += i;
            if (k % i == 0)
                break;
        }
        cout << ans * k << "\n";
    }
}

int32_t main()
{
    fast;
    int t{1};
    func();
    cin >> t;
    while (t--)
        solve();

    return 0;
}