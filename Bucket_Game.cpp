#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int ones, odd;
    ones = odd = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x == 1)
            ones++;
        else if (x % 2)
            odd++;
    }
    // /INPUT

    int alice, bob;
    alice = bob = 0;

    alice += (ones + 1) / 2;
    bob += ones / 2;

    if (odd % 2 == 0)
    {
        if (ones % 2 == 0)
            bob += (n - ones);
        else
            alice += (n - ones);
    }
    else
    {
        if (ones % 2 == 0)
            alice += (n - ones);
        else
            bob += (n - ones);
    }

    if (bob == alice)
        cout << "Draw" << endl;
    else if (bob > alice)
        cout << "Bob" << endl;
    else
        cout << "Alice" << endl;
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