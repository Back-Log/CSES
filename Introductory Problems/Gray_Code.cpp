#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
void solve()
{
  int n;
  cin >> n;
  if (n == 1)
  {
    cout << 0 << endl;
    cout << 1 << endl;
    return;
  }
  vector<string>copy = {"00", "01", "11", "10"};
  int req = n - 2;
  vector<string>ans;
  // if(req==0)
  // {
  //  ans=copy;
  // }
  while (req != 0)
  {
    ans.clear();
    for (int i = 0; i < copy.size(); i++)
    {
      string s = copy[i];
      s = "0" + s;
      ans.pb(s);
    }
    reverse(copy.begin(), copy.end());
    for (int i = 0; i < copy.size(); i++)
    {
      string s = copy[i];
      s = "1" + s;
      ans.pb(s);
    }
    req--;
    copy = ans;

  }


  for (auto i : copy)
  {
    cout << i << endl;
  }



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