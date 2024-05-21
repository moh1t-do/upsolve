#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &e : vec)
        cin >> e;
    // /INPUT

    int ans = 0;
    for (int j = 0; j < 3; j++)
    {
        map<array<int, 2>, vector<int>> mp;
        for (int i = 0; i < n - 2; i++)
        {
            if (j == 0)
                mp[{vec[i + 1], vec[i + 2]}].push_back(vec[i]);
            else if (j == 1)
                mp[{vec[i], vec[i + 2]}].push_back(vec[i + 1]);
            else
                mp[{vec[i], vec[i + 1]}].push_back(vec[i + 2]);
        }

        for (auto &e : mp)
        {
            auto arr = e.second;
            sort(arr.begin(), arr.end());
            vector<int> tmp;
            int c = 1;
            for (int k = 1; k < arr.size(); k++)
            {
                if (arr[k] == arr[k - 1])
                    c++;
                else
                {
                    tmp.push_back(c);
                    c = 1;
                }
            }
            tmp.push_back(c);
            if (tmp.size() < 2)
                continue;

            int sum = accumulate(tmp.begin(), tmp.end(), 0);
            sum = sum * (sum - 1) / 2;
            ans += sum;
            for (auto &x : tmp)
                ans -= (x * (x - 1) / 2);
        }
    }
    cout << ans << endl;
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
APPROACH
1. Keep track for triplets having the same first ele.
2. Now use combinatorics to find its contribution to the answers ie (sum*(sum - 1)/2) - (x*(x-1)/2).
3. Where sum is the sum of the frqs and x is the sum of frq of same element.
4. Repeat  steps for same second and third and sum up the result.

TOPICS
Combinatorics
*/