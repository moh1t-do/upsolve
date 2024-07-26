#include <bits/stdc++.h>
#define f ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

#define ll long long

void solve()
{
    vector<ll> v(3);
    for (auto &e : v)
        cin >> e;

    for (int i = 0; i < 5; ++i)
    {
        sort(v.begin(), v.end());
        v[0]++;
    }
    cout << v[0] * v[1] * v[2] << endl;
}

int main()
{
    f;
    int t;
    cin >> t;
    
    while (t--)
    {
        solve();
    }

    return 0;
}
