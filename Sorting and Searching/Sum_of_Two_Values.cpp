/**
*     Time is the most valuable thing a man can spend. – Theophrastus.
**/
 
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
void solve()
{
  int n,tar;
  cin>>n>>tar;
  vector<pair<int,int>>arr(n);
 for(int i=0;i<n;i++)
 {
   cin>>arr[i].first;
   arr[i].second=i;
 
 }
 
 sort(arr.begin(), arr.end());
 int l=0,r=n-1;
 pair<int,int>ans{-1,-1};
 while(l<r)
 {
  int sum=arr[l].first+arr[r].first;
   if(sum>tar)
   {
    r--;
   }
   else if(sum<tar)
   {
    l++;
   }
   else
   {
    ans.first=arr[l].second+1;
    ans.second=arr[r].second+1;
    break;
 
   }
 
 }
 
if(ans.first==-1)
{
cout<<"IMPOSSIBLE"<<endl;
}
else
{
  cout<<ans.first<<" "<<ans.second<<endl;
}
 
}
int32_t main()
{ 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  t=1;
  //cin>>t;
  while(t--)
  {
    solve();
  }
 
 
  return 0;
}
