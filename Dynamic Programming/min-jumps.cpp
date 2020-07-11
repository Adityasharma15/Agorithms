// Minimum number of jumps
// https://www.geeksforgeeks.org/minimum-number-of-jumps-to-reach-end-of-a-given-array/

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

    vector<ll> arr(n);

    for(ll i = 0; i<n; i++)
      cin >> arr[i];

    vector<ll> dp(n+1, 1000000000);
    dp[0] = 0;
    for(ll i = 0; i<n; i++)
    {
        for(ll j = min(n, (i+arr[i])); j>i; j--)
        {
          if(dp[j] <= (dp[i]+1))
            break;

          else
            dp[j] = (dp[i]+1);
        }
    }

    if(dp[n-1]<(1000000000))
      cout << dp[n-1] << "\n";

    else
        cout << "-1\n";

	}

  return 0;

}
