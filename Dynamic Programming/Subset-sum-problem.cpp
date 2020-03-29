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

      ll arr[n+1];

      arr[0] = 0;

      ll sum = 0;

      for(ll i = 1; i<=n; i++)
      {
          cin >> arr[i];
          sum+= arr[i];
      }

      if(sum%2!=0)
      {
        cout << "NO" << "\n";
        continue;
      }

      ll trgtsum = sum/2;

      cout << "trgt   " << trgtsum << "\n";

      bool dp[trgtsum + 1][n+1];


      for(ll i = 0;i<=trgtsum; i++)
          dp[i][0] = false;

      for(ll i = 0;i<=n; i++)
          dp[0][i] = true;

      for(ll i = 1; i<=trgtsum; i++)
      {
        for(ll j = 1; j<=n; j++)
        {

            if(i == arr[j])
            {
                dp[i][j] = true;
                continue;
            }

            if(i < arr[j])
              dp[i][j] = dp[i][j-1];

            else
              dp[i][j] = (dp[i][j-1] || dp[i - arr[j]][j-1]);

            //if(dp[i][j] == true)
              //1cout << i << "   " << j << "\n";
        }

      }

      if(dp[trgtsum][n])
        cout << "YES" << "\n";

      else
        cout << "NO" << "\n";

	}

}
