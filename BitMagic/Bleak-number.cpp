#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

  vector<bool> arr(10001, false);
  for(ll i = 1; i<=10000; i++)
  {
    ll temp = i + __builtin_popcountll(i);

    if(temp<=10000)
      arr[temp] = true;
  }

	ll t;
	cin >> t;
	while(t--)
  {
      ll n;
      cin >> n;

      if(arr[n])
        cout << "0\n";

      else
        cout << "1\n";
	}
  return 0;
}
