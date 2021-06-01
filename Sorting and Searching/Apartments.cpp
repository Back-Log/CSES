/**
*     All limitations are self-imposed. – Oliver Wendell Holmes
**/
 
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
void solve()
{
  
 int n,m,k;
 cin>>n>>m>>k;
 int arr[n];
 for(int i=0;i<n;i++)
 {
   cin>>arr[i];
 }
 int brr[m];
 for(int i=0;i<m;i++)
 {
   cin>>brr[i];
 }
int ans=0;
sort(arr,arr+n);
sort(brr,brr+m);
int i=0,j=0;
while(i<n and j<m)
{
  if(abs(arr[i]-brr[j])<=k)
  {
    ans++;
    i++;
    j++;
  }
  else if(arr[i]-brr[j]>k)
  {
    j++;
  }
  else
  {
    i++;
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
