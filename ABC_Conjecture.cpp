#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define PB push_back
#define py cout << "Yes" << endl
#define pn cout << "No" << endl

void solve()
{
    int n;
    string a, b;
    cin >> n >> a >> b;
    // /INPUT
    if (a == b)
    {
        py;
        return;
    }

    vector<int> posb, opa, opc;

    int op1 = 0, op2 = 0;
    bool check = true;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'b' || b[i] == 'b')
        {
            // both indices have 'b'
            if (a[i] == 'b' && b[i] == 'b')
                posb.push_back(i);
            else
            {
                check = false;
                break;
            }
        }

        else
        {
            // both equal no op needed;
            if (a[i] == b[i])
                continue;
            // swap a with c
            if (a[i] == 'a')
            {
                op1++;
                opa.push_back(i);
            }
            // swap c with a
            else
            {
                op2++;
                opc.push_back(i);
            }
        }
    }

    if (!check || op1 != op2)
    {
        pn;
        return;
    }

    int bn = posb.size();
    int sz = opa.size();
    if (bn == 0 && sz > 0)
    {
        pn;
        return;
    }
    if (bn == 0 && sz == 0)
    {
        py;
        return;
    }

    for (int i = 0; i < sz; i++)
    {
        if (upper_bound(posb.begin(), posb.end(), opa[i]) == posb.end())
        {
            pn;
            return;
        }
        int idx = *upper_bound(posb.begin(), posb.end(), opa[i]);
        if (idx < n && opa[i] < idx && opc[i] > idx)
            continue;
        else
        {
            check = false;
            break;
        }
    }

    if (check)
        py;
    else
        pn;
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