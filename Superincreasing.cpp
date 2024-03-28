#include <bits/stdc++.h>
#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
using namespace std;

void solve()
{
  using ll = long long;
  ll n, k, x;
  cin >> n >> k >> x;
  // /INPUT

  ll tmp = 1;
  for (int i = 1; i < k; i++)
  {
    tmp *= 2;
    if (tmp >= 1e9)
      break;
  }

  if (x >= tmp)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
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