#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{
    int n;
    cin >> n;
    // /INPUT
    vector<int> vec{10, 11, 101, 111, 1001, 1011, 1101, 1111, 10001, 10011, 10101, 10111, 11001, 11011, 11101, 11111};
    reverse(vec.begin(), vec.end());
    bool k = true;
    while (n > 1)
    {
        int tmp = n;
        for (int i = 0; i < vec.size(); i++)
        {
            if (n % vec[i] == 0)
                n = n / vec[i];
        }
        if (tmp == n)
        {
            k = false;
            break;
        }
    }

    if (k)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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