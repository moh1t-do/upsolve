#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

// #define int long long

void solve()
{
    string num;
    cin >> num;
    // /INPUT
    string res;
    for (int i = 0; i < num.size(); i++)
    {
        if (res.empty() && num[i] == '9')
            res.push_back('9');
        else if (num[i] >= '5')
            res.push_back('9' - num[i] + '0');
        else
            res.push_back(num[i]);
    }
    cout << res << endl;
}

int main()
{
    fast;
    int t{1};
    // cin >> t;
    while (t--)
        solve();

    return 0;
}