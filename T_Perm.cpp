#include <bits/stdc++.h>
using namespace std;

bool isGood(int n)
{
    while (n > 0)
    {
        int d = n % 3;
        if (d == 2)
            return true;

        n /= 3;
    }

    return false;
}

void solve()
{
    int n;
    cin >> n;

    if (isGood(n + 1))
    {
        for (int i = n; i >= 1; i--)
            cout << i << " ";
    }
    else if (isGood(n))
    {
        for (int i = n - 1; i >= 1; i--)
            cout << i << " ";
        cout << n;
    }
    else
    {
        for (int i = n - 2; i >= 1; i--)
            cout << i << " ";
        cout << n << " " << n - 1;
    }
    cout << endl;
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
        solve();
}

/*
3 case for per formation
when (n, n-1, n+1) is good
coded accordingly
*/