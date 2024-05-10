#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define int long long

void solve()
{
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> point{0}, time{0};

    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        point.push_back(x);
    }

    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        time.push_back(x);
    }
    // /INPUT

    while (q--)
    {
        int d;
        cin >> d;

        int dd = lower_bound(point.begin(), point.end(), d) - point.begin();
        if (point[dd] == d)
            cout << time[dd] << " ";
        else
        {
            int dt = time[dd - 1];
            // double ss = ((point[dd] - point[dd - 1]) * 1.0) / ;

            cout << (dt + (int)(1.0 * (d - point[dd - 1]) * (time[dd] - time[dd - 1])) / (point[dd] - point[dd - 1])) << " ";
        }
    }
    cout << endl;
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
distance time, lower bound application
*/