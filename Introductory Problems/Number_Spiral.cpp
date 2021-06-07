// Time - 2021-05-15 17:09:59
 
/**
*   Push yourself, because no one else is going to do it for you.
**/
 
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
void solve()
{ 
   int x,y;
   cin>>x>>y;
int mx=max(x,y);
int mn=min(x,y);
int val=mx*mx-(mx-1);
int diff=mx-mn;
if(mx%2==0)
{
	if(x<y)
	  val-=diff;
	else
		val+=diff;
}    
else
{
	if(y<x)
	{
		val-=diff;
	}
	else
	{
		val+=diff;
	}
}
cout<<val<<endl;
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
