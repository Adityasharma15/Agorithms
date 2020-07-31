// Maximum profit by buying and selling a share at most k times
// https://www.geeksforgeeks.org/maximum-profit-by-buying-and-selling-a-share-at-most-k-times/

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
    ll n, k;
    cin >> k >> n;

    vector<ll> profit_arr(n+1);
    for(ll i = 1; i<=n; i++)
    	cin >> profit_arr[i];

		ll profit_dp[k+1][n+1];
		memset(profit_dp, 0, sizeof(profit_dp));

		ll max_for_day_array[n+1];
		for(ll i = 1; i<=k; i++)
		{
			//Day is day of transactions, i.e. k days are there
			ll max_for_this_day = INT_MIN;
			max_for_day_array[0] = INT_MIN;

			for(ll j = 1; j<=n; j++)
			{
				ll temp = profit_dp[i-1][j] - profit_arr[j];

				if( temp> max_for_this_day)
					max_for_this_day = temp;

				max_for_day_array[j] = max_for_this_day;
			}

			for(ll j = 1; j<=n; j++)
					profit_dp[i][j] = max(profit_dp[i][j-1] , max_for_day_array[j-1]+profit_arr[j]);
		}

		if(profit_dp[k][n] > 0)
			cout << profit_dp[k][n] << "\n";

		else
			cout << "0\n";
	}

  return 0;
}
