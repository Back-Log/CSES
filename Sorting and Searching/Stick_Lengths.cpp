#include<bits/stdc++.h>
using namespace std;
#define int int64_t
void solve()
{
  int n;
  cin >> n;
  vector<int>arr(n);
  for (auto &i : arr)
  {
    cin >> i;
  }

  sort(arr.begin(), arr.end());
  auto ok = [&](int req)
  {
    int ans = 0;
    for (auto i : arr)
    {
      ans += abs(i - req);

    }
    return ans;
  };
  //median of the array
  int req = arr[n / 2];
  int final = INT_MAX;
  final = ok(req);
  cout << final << endl;




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