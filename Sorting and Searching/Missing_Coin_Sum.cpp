#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
void solve()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  int sum = 1;
  for (int i = 0; i < n; i++)
  {
    if (sum < arr[i])
    {
      break;
    }
    sum += arr[i];
  }
  cout << sum << endl;
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