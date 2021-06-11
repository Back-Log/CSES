/**
*     All limitations are self-imposed. – Oliver Wendell Holmes
**/
 
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
void solve()
{
  int a,b;
  cin>>a>>b;
  if((a+b)%3==0 and min(a,b)*2>=max(a,b))
  {
    cout<<"YES"<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }
 
 
 
 
}
int32_t main()
{ 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  t=1;
  cin>>t;
  while(t--)
  {
    solve();
  }
 
 
  return 0;
}