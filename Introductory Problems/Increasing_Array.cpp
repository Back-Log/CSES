// Time - 2021-04-27 15:39:07
 
/**
*        By: this->life
*         -Push yourself, because no one else is going to do it for you.
*         -Life is onetime offer ,use it well.
**/
 
#include<bits/stdc++.h>
using namespace std;
#define int long long 
void solve()
{ 
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
   	cin>>arr[i];
   }
   int ans=0;
   for(int i=1;i<n;i++)
   {
   	if(arr[i]<arr[i-1])
   	{
   		int val=abs(arr[i]-arr[i-1]);
   		ans+=val;
   		arr[i]=arr[i]+val;
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
