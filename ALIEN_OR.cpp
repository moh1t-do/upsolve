#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void print(vector<int> &vec)
{
    for (auto &e : vec)
        cout << e << " ";
    cout << endl;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<string> vec(n);
    for (auto &e : vec)
        cin >> e;
    // /INPUT

    int ind = 1;
    while (ind <= pow(2, k))
    {
        vector<int> sb, indexs;
        for (int i = 0; i < ind; i++)
        {
            bool kk = true;
            for (int j = 0; j < k; j++)
            {
                if (ind & (1 << j))
                {
                    sb.push_back(k - j - 1);
                }
                else
                {
                    if (vec[i][k - j - 1] == '1')
                        kk = false;
                }
            }
            if (kk)
                indexs.push_back(i);
        }

        if (indexs.empty())
        {
            cout << "NO" << endl;
            return;
        }

        // print(indexs);
        // print(sb);

        bool kk = false;
        for (int i = 0; i < indexs.size(); i++)
        {
            for (int j = 0; j < sb.size(); j++)
            {
                if (vec[indexs[i]][sb[j]] == '1')
                {
                    kk = true;
                    break;
                }
            }
        }

        if (!kk)
        {
            cout << "NO" << endl;
            return;
        }
        ind++;
    }

    cout << "YES" << endl;
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