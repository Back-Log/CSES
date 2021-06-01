#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define MAX 1e9+7
#define MIN -1e9-7
#define mem memset(a, 0, sizeof(a))
#define pb push_back
#define int long long
void solve()
{
  int n;
  cin>>n;
  while(true)
  {
    cout<<n<<" ";
    if(n==1) break;
    if(n&1) n=n*3+1;
    else n=n/2;
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
