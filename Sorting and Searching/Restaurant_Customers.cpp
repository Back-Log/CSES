/**
*     All limitations are self-imposed. – Oliver Wendell Holmes
**/
 //this code uses co=ordinate compression
#include<bits/stdc++.h>
using namespace std;
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define show(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define show(x...)
#endif
 
#define int long long
#define pb push_back
void solve()
{
  int N=2e5+5;
  vector<int>comp(2*N,0);
 int n;
 cin>>n;
 map<int,int>mp;
 vector<pair<int,int>>v(n);
 for(int i=0;i<n;i++)
 {
  int a,b;
  cin>>a>>b;
  v[i]={a,b};
  mp[a]=0;
  mp[b]=0;
 }
 int st=1;
 for(auto &i:mp)
 {
  i.second=st++;
 }
 // show(mp);
for(int i=0;i<n;i++)
{
  int a=v[i].first;
  int b=v[i].second;
  int mya=mp[a];
  int myb=mp[b];
  comp[mya]+=1;
  comp[myb]-=1;
}
 
 int sum=0;
 int ans=-1;
 for(int i=0;i<2*N-1;i++)
 {
  sum+=comp[i];
  ans=max(ans,sum);
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
