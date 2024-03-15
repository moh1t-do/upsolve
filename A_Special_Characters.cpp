#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{
    int num;
    cin >> num;
    if (num % 2 != 1)
    {
        cout << "YES" << endl;
        char l = 'A';
        for (int i = 0; i < num / 2; i++)
        {
            cout << (char)(l + i) << (char)(l + i);
        }
        cout << endl;
    }
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