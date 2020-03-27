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

    cin >> n >> k;

    ll dp[n+1][k + 1];

    ll temp;

    memset(dp, 0, sizeof(dp));

    for(ll i = 1; i<=n; i++)
      dp[i][1] = 1;

      for(ll i = 1; i<=k; i++)
        dp[1][i] = i;

    for(ll e = 2; e<=n; e++)
    {
        for(ll f = 1; f<=k; f++)
        {
            if(f<e)
              dp[e][f] = dp[e-1][f];

            else
            {
              dp[e][f] = INT_MAX;

              for(ll i =0; i<f; i++)
              {
                // try and drop from all floors, and find max of if
                // broken then no of cases and no. of case if not
                // broken

                temp = 1 + max( dp[e-1][i-1], dp[e][f-i]);

                dp[e][f] = min(temp, dp[e][f]);
              }
            }

        }

    }

    cout << dp[n][k] << "\n";

	}

}
