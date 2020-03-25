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
    
    if(n == 0)
      cout << 0 << "\n";

    else
    {
      ll ans = __builtin_ctz(n);
      cout << ans+1 << "\n";
    }


	}

}
