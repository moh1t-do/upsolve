#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define ll long long

int main()
{
    fast;
    ll t{1};
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        // /INPUT

        int cnt = 1;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] != s[i - 1])
                cnt++;
        }

        if (cnt == 1)
            cout << cnt << endl;

        else if (cnt == 2 && s[0] == '1')
            cout << cnt << endl;

        else
            cout << cnt - 1 << endl;
    }

    return 0;
}

/*
cut required when adj ele are unequal
cut -1 for 0000111 case as it can be taken as in a single back
the above case will not occurr for 0000, 11111, 111000
*/