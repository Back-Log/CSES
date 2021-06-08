/**
*     All limitations are self-imposed. – Oliver Wendell Holmes
**/
 
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
const int MOD = 1e9 + 7;
int pow(int a, int n, int MOD)
{
  int result = 1;
  while (n > 0)
  {
    if (n & 1)
    {
      result *= a % MOD;
      result = ((result % MOD) + MOD) % MOD;
    }
 
    a *= a % MOD;
    //handling negative modulo
    a = ((a % MOD) + MOD) % MOD;
    n = n >> 1;
  }
  return result;
 
}
void solve()
{
  
 int n;
 cin>>n;
 cout<<pow(2,n,MOD);
 
 
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
