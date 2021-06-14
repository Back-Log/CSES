#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
void solve()
{

  int n;
  cin >> n;
  vector<int>cnt(n + 1);
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    cnt[x] = i + 1;
  }
  int ans = 1;
  int i = 1;
  while ((i + 1) <= n)
  {
    if ((i + 1) <= n and cnt[i + 1] < cnt[i])
    {
      ans++;
      i++;
      continue;
    }
    while ((i + 1) <= n and cnt[i + 1] > cnt[i])
    {
      i++;
    }
  }

  cout << ans << endl;

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