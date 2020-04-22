//Solution to Fast Exponential in c++
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll fastexpo(ll a, ll b)
{
  ll x = 1;

  if(b==0)
    return 1;

  if(b==1)
    return a;

  if(b%2==0)
  {
      x = fastexpo(a, b/2);
      x%=1000000007;
      x*=x;
      x%=1000000007;
      return x;
  }

  else
  {
    x = fastexpo(a, b/2);
    x%=1000000007;
    x*=x;
    x%=1000000007;
    return x*a;
  }
}

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

	ll t;
	cin >> t;

	while(t--)
  {

    ll a, b;
    cin >> a >> b;

    ll ans = fastexpo(a, b);
    ans%=1000000007;
    
    cout << ans << "\n";

	}

  return 0;
}
