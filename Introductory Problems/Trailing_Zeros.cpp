#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
void solve()
{
  
 int n;
 cin>>n;
 int inc=5;
 int ans=0;
while((n/inc)>0)
{
  ans+=(n/inc);
  inc*=5;
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