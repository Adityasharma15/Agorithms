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

    ll n, m;
    cin >> n >> m;

    string s, s1;
    cin >> s >> s1;

    ll dp[n+1][m+1];

    memset(dp, 0, sizeof(dp));

    for(ll i = 0; i<=m; i++)
      dp[0][i] = i;

    for(ll i = 0; i<=n; i++)
      dp[i][0] = i;

    ll t;

    for(ll i = 1; i<=n; i++)
    {
      for(ll j = 1; j<=m; j++)
      {

          if(s[i-1] == s1[j-1])
            dp[i][j] = dp[i-1][j-1];

          else
            {
                dp[i][j] = 1 + min(dp[i-1][j], dp[i][j-1]);
                dp[i][j] = min((dp[i-1][j-1] + 1), dp[i][j]);
            }
      }
    }

      cout << dp[n][m] << "\n";

	}

}
