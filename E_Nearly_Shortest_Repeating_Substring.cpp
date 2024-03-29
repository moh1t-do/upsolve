#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
#define int long long

vector<int> divs;
void getDiv(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divs.push_back(i);
            if ((n / i) != i)
                divs.push_back(n / i);
        }
    }
    sort(divs.begin(), divs.end());
}

bool checkStr(string &s1, string &s2)
{
    int cnt = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[i])
            cnt++;
    }

    return cnt <= 1;
}

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    // /INPUT
    getDiv(n);
    for (auto &ele : divs)
    {
        string t1, t2;
        t1 = s.substr(0, ele);
        t2 = s.substr(n - ele);

        string tt1 = "", tt2 = "";
        for (int i = 0; i < (n / ele); i++)
        {
            tt1 += t1;
            tt2 += t2;
        }

        if (checkStr(tt1, s) || checkStr(tt2, s))
        {
            cout << ele << endl;
            return;
        }
    }
}

int32_t main()
{
    fast;
    int t{1};
    cin >> t;
    while (t--)
    {
        solve();
        divs.clear();
    }

    return 0;
}