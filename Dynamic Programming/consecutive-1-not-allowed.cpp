// Consecutive 1's not allowed

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

    vector<ll> ending_with_zero(n+1,0);
    vector<ll> ending_with_one(n+1, 0);

    // 0 is that string
    ending_with_zero[1] = 1;

    // 1 is that string
    ending_with_one[1] = 1;

    for(ll i = 2; i<=n; i++)
    {
      // because we can't have continous ones
      ending_with_zero[i] = (ending_with_zero[i-1] + ending_with_one[i-1])%1000000007;
      ending_with_one[i] = ending_with_zero[i-1]%1000000007;
    }

    ll total = (ending_with_one[n]%1000000007 + ending_with_zero[n]%1000000007);
    cout << total%1000000007 << "\n";
	}

  return 0;
}
