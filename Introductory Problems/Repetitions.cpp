// Time - 2021-04-27 15:03:25
 
/**
*        By: this->life
*         -Push yourself, because no one else is going to do it for you.
*         -Life is onetime offer ,use it well.
**/
 
#include<bits/stdc++.h>
using namespace std;
void solve()
{ 
   string s;
   cin>>s;
   int arr[26]={0};
   int ans=1;
   int cnt=0;
   // for(int i=0;i<s.size();i++)
   // {
   	 // int val=s[i]-'A';
   	 // cout<<val<<" ";
   	 // if(arr[val]==0 or arr[val]==(i-1))
   	 // {
   	 	// arr[val]=i;
   	 	// cnt++;
   	 // }
   	 // else
   	 // {
   	 	// ans=max(ans,cnt);
   	 	// cnt=0;
   	 	// arr[val]=0;
   	 // }
//    	
   // }
   int n=s.size();
   for(int i=0;i<n;)
   {
   	  int cnt=1;
   	  if(s[i]==s[i+1])
   	  {
   	  while(s[i]==s[i+1] and i<n)
   	  {
   	  	i++;
   	  	cnt++;
   	  }
   	  }
   	  else
   	  {
   	  	i++;
   	  }
   	  ans=max(ans,cnt);
   	  
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
