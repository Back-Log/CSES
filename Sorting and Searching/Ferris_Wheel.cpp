/**
*     All limitations are self-imposed. – Oliver Wendell Holmes
**/
 
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
void solve()
{
  
 int n,x;
 cin>>n>>x;
 int arr[n];
 for(int i=0;i<n;i++)
 {
   cin>>arr[i];
 }
 sort(arr,arr+n);
 int ans=0;
 int l=0,r=n-1;
 while(l<=r)
 {
   int val=arr[l]+arr[r];
   if(val>x)
   {
    r--;
    ans+=1;
   }
   else
   {
    ans+=1;
    r--;
    l++;
   }
 
 }
// if(n&1) ans++;
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
