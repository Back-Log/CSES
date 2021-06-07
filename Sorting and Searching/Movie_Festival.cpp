/**
*     All limitations are self-imposed. – Oliver Wendell Holmes
**/
 
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
void solve()
{
  int n;
  cin>>n;
  vector<pair<int,int>>v;
  for(int i=0;i<n;i++)
  {
   int a,b;
   cin>>a>>b;
   v.pb({a,b});
  }
 sort(v.begin(), v.end(),[&](pair<int,int>p1,pair<int,int>p2){
  return p1.second<p2.second;
 });
int ans=1;
int val=v[0].second;
for(int i=1;i<n;i++)
{
  if(v[i].first>=val)
  {
    ans++;
    val=v[i].second;
  }
}
cout<<ans<<endl;
 
}
int32_t main()
{ 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  t=1;
  while(t--)
  {
    solve();
  }
 
 
  return 0;
}
