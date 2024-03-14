#include <bits/stdc++.h>
#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
using namespace std;

void solve()
{
  int n;
  cin >> n;
  vector<int> vec(n);
  for (auto &ele : vec)
    cin >> ele;
  // /INPUT

  for (int i = 0; i < n - 2; i++)
  {
    int x, y, z;
    x = vec[i];
    y = vec[i + 1] - (x * 2);
    z = vec[i + 2] - x;

    if (y < 0 || z < 0)
    {
      cout << "NO" << endl;
      return;
    }

    vec[i] = 0;
    vec[i + 1] = y;
    vec[i + 2] = z;
  }

  if (vec[n - 1] == 0 && vec[n - 2] == 0)
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