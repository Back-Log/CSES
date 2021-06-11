#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
void solve()
{
//Kaden's Algorithm
  int n;
  cin >> n;
  int arr[n];
  int neg = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (arr[i] < 0) neg++;
  }
  int mx = INT_MIN;
  int curr = 0;
  for (int i = 0; i < n; i++)
  {
    curr += arr[i];
    if (curr < 0)
    {
      curr = 0;
    }

    mx = max(curr, mx);

  }
//when all value is negative
  if (neg == n)
  {
    mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
      mx = max(mx, arr[i]);
    }

  }

  cout << mx << endl;




}
int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  t = 1;
  //cin>>t;
  while (t--)
  {
    solve();
  }


  return 0;
}