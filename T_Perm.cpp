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

    int i = 0;
    while (i < n)
    {
        vec[i] = i + 1;
        i++;
    }

    i = 2;
    while (i < n)
    {
        if (i % 3 == 2)
            swap(vec[i], vec[i - 1]);
        i++;
    }

    if (n % 3 < 2)
    {
        int j = 0;
        while (j < n)
        {
            cout << vec[j] << " ";
            j++;
        }
        cout << endl;
    }
    else
    {

        int tmp = vec[n - 1];
        tmp = tmp / 3;
        tmp = tmp % 3;
        int sv;
        if (tmp == 0)
            sv = 1;
        else if (tmp == 1)
            sv = 0;
        else
            sv = 2;

        i = 2;
        while (i < n)
        {
            int tk = vec[i] / 3;
            if (tk % 3 == sv)
            {
                swap(vec[i], vec[n - 1]);
                break;
            }
            i += 3;
        }

        int j = 0;
        while (j < n)
        {
            cout << vec[j] << " ";
            j++;
        }
        cout << endl;
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
