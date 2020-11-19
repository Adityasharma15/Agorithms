#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

  ll n, a, b, c;
  cin >> n >> a >> b >> c;

  vector<ll> dp(n+1, INT_MIN);
  dp[0] = 0;

  for(ll i=a; i<n+1; i++){
    dp[i] = max(dp[i], dp[i-a] + 1);
  }

  for(ll i = b; i<n+1; i++){
    dp[i] = max(dp[i], dp[i-b] + 1);
  }

  for(ll i = c; i<n+1; i++){
    dp[i] = max(dp[i], dp[i-c] + 1);
  }

  cout << dp[n] << "\n";
  return 0;
}
