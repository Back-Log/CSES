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
vector<int>arr(n);
 int ans=0;
 for(int i=0;i<n;i++) 
 {
 cin>>arr[i];
 }
 sort(arr.begin(),arr.end());
ans = std::distance(arr.begin(),
                          std::unique(arr.begin(), arr.begin() + n));
 
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
