/**
*     Time is the most valuable thing a man can spend. – Theophrastus.
**/
 
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
void solve()
{
  string s;
  cin>>s;
  int n=s.length();
  bool even=false,odd=false,can=true;
  if(n%2==0)
  {
    even=true;
  }
  else
  {
    odd=true;
  }
 map<char,int>mp;
 for(auto i:s)
 {
  mp[i]++;
 }
 string ans="";
 stack<char>st;
 for(auto &i:mp)
 {
   int times=i.second;
   if(times&1 and even)
   {
    can=false;
    break;
   }
   else if(times&1)
   {
     int will=times-1;
     if(will==0) continue;
     while(will!=0)
     {
      ans+=i.first;
      st.push(i.first);
      will-=2;
     }
     mp[i.first]=1;
   }
   else
   {
    int will=times;
   while(will!=0)
     {
      ans+=i.first;
      st.push(i.first);
      will-=2;
     }
    mp[i.first]=0;
 
   }
 
 }
 int ok=0;
if(odd)
{
 for(auto i:mp)
 {
  if(i.second==1)
  {
    ans+=i.first;
    ok++;
  }
 
 
 }
 
 
}
if(ok>1) can=false;
if(!can)
{
 
cout<<"NO SOLUTION";
return;
 
}
for(auto i:ans)
{
  cout<<i;
}
while(!st.empty())
{
  cout<<st.top();
  st.pop();
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