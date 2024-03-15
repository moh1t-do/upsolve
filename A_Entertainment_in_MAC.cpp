#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{
    int n;
    string str;
    cin >> n >> str;
    // /INPUT

    int i = 0, j = str.size() - 1;
    bool k = true;
    while (i < j)
    {
        if (str[i] < str[j])
        {
            k = true;
            break;
        }
        if (str[i] > str[j])
        {
            k = false;
            break;
        }
        i++;
        j--;
    }

    if (k)
        cout << str << endl;
    else
    {
        string s = str;
        reverse(s.begin(), s.end());
        cout << s << str << endl;
    }
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