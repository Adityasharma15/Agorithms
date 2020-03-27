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

    for(ll i =0; i<n; i++)
      cin >> arr[i];

    ll dp[n];

    for(ll i = 0 ;i<n; i++)
        dp[i] = 1;

    ll maxx = -1;

    for(ll i = 1; i<n; i++)
    {
      for(ll j = 0; j<i; j++)
      {
          if(arr[i] > arr[j])
              dp[i] = max(dp[i] , 1 + dp[j]);

          maxx = max(maxx, dp[i]);
      }

    }

    cout << maxx << "\n";

	}

}
