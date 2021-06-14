#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
void solve()
{
  int n;
  cin >> n;
  int sum = 0;
  vector<int>v(n);
  int mn = INT_MAX;
  for (auto &i : v) {
    cin >> i;
    sum += i;
  }
  int total = (int)pow(2, n);
  for (int i = 0; i < total; i++)
  {
    int val = 0;
    for (int mask = 0; mask < n; mask++)
    {

      if (i & (1 << mask))
      {
        val += v[mask];
      }

    }
    mn = min(mn, abs((sum-val) - val));


  }

  cout << mn << endl;



}
int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  t = 1;
  //cin>>t;
  while (t--)
  {
    solve();
  }


  return 0;
}