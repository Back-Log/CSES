// Time - 2021-04-27 15:49:12
 
/**
*        By: this->life
*         -Push yourself, because no one else is going to do it for you.
*         -Life is onetime offer ,use it well.
**/
 
#include<bits/stdc++.h>
using namespace std;
void solve()
{ 
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
	arr[i]=i+1;
}
int inc=2;
for(int i=0;i<n;i+=1)
{
	if(inc<n)
	{
		swap(arr[i],arr[inc]);
		inc+=2;
	}
}
if(n==4)
{
	cout<<2<<" "<<4<<" "<<1<<" "<<3<<endl;
	return;
}
for(int i=0;i<n-1;i++)
{
	if(abs(arr[i]-arr[i+1])==1)
	{
		cout<<"NO SOLUTION";
		return;
	}
}
for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
}
 
 
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

