#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define MAX 1e9+7
#define MIN -1e9-7
#define mem memset(a, 0, sizeof(a))
#define pb push_back
#define int long long
const int N=2*1e5+10;
int arr[N];
void solve()
{
 int n;
 cin>>n;
 for(int i=0;i<n-1;i++)
 {
  int a;
  cin>>a;
  arr[a]++;
 }
 for(int i=1;i<=n;i++)
 {
  if(arr[i]==0)
  {
    cout<<i;
    break;
  }
 }
 
 
 
}
int32_t main()
{ 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   // #ifndef ONLINE_JUDGE
     //  freopen("input.txt","r",stdin);
    //   freopen("output.txt","w",stdout);
   // #endif
  int t;
  t=1;
  while(t--)
  {
    solve();
  }
 
 
  return 0;
}
