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

    ll ans = __builtin_popcountll(n);

    if(ans==1)
      cout << "YES" << "\n";

    else
      cout << "NO" << "\n";
	}

}
