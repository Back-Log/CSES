/*
  Life is onetime offer ,use it well
*/
#include<bits/stdc++.h>
using namespace std;
 
#define int long long
int32_t main()
{
  int n;
  cin>>n;
  vector<int>v(n+1);
  iota(v.begin()+1, v.end(),1);
  int sum=n*(n+1)/2;
  if(sum&1) cout<<"NO"<<endl;
  else
  {
    int req=sum/2;
    int temp=0,i=n;
    vector<int>one,two;
    while(i>=0)
    {
      temp+=v[i];
      if(temp>req)
      {
        temp-=v[i];
        break;
      }
      else
      {
       one.push_back(v[i]);
      v[i]=-1;
     i-=2;
   }
 
    }
    int rem=req-temp;
    v[rem]=-1;
    if(rem!=0)
      one.push_back(rem);
    for(int i=1;i<=n;i++)
    {
      if(v[i]!=-1)
      {
        two.push_back(v[i]);
      }
    }
 
 
cout<<"YES"<<endl;
cout<<one.size()<<endl;
for(auto i:one)
{
  cout<<i<<" ";
}
cout<<"\n";
cout<<two.size()<<endl;
 
for(auto i:two)
{
  cout<<i<<" ";
}
cout<<"\n";
 
 
  }
 
  return 0;
}
