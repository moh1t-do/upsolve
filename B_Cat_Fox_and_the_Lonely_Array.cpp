#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void bits(vector<int> &v, int n)
{
    for (int i = 0; i < 32; i++)
    {
        if (n & 1 << i)
            v[i]++;
    }
}

bool func(vector<int> &v, int k)
{
    int n = v.size();
    vector<int> cnt(32);

    for (int i = 0; i < k; i++)
        bits(cnt, v[i]);

    vector<int> t = cnt;
    for (int j = k; j < n; j++)
    {
        bits(t, v[j]);
        for (int i = 0; i < 32; i++)
        {
            if (v[j - k] & 1 << i)
                t[i]--;
        }

        for (int i = 0; i < 32; i++)
        {
            if ((cnt[i] == 0 && t[i] == 0) || (cnt[i] > 0 && t[i] > 0))
                continue;
            return false;
        }
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &e : vec)
        cin >> e;
    // /INPUT

    int l = 1, h = n;

    while (l < h)
    {
        int m = l + (h - l) / 2;
        if (func(vec, m))
            h = m;
        else
            l = m + 1;
    }
    cout << l << endl;
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

/*
binary search + sliding window.
using frequency of the set bits at ith position.
*/