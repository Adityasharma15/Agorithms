#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

	ll t;
	cin >> t;

	while(t--)
  {
		ll n;
    cin >> n;

    ll arr[n];
    ll left[n], right[n];

    for(ll i = 0; i<n; i++)
      cin >> arr[i];

    ll leftmax = INT_MIN;

    for(ll i =0; i<n; i++)
    {
      leftmax = max(arr[i], leftmax);
      left[i] = leftmax;
    }

    ll rightmax = INT_MIN;

    for(ll i = (n-1); i>=0; i--)
    {
      rightmax = max(arr[i], rightmax);
      right[i] = rightmax;
    }

    ll ans = 0;

    for(ll i = 0; i<n; i++)
    {
      if(( min(right[i],left[i]) - arr[i]) >=0)
      ans += ( min(right[i],left[i]) - arr[i]);
    }

    cout << ans << "\n";
	}

  return 0;

}
