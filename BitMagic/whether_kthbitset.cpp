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

    if(n & (1<<k))
      cout << "Yes" << "\n";

    else
      cout << "No" << "\n";

	}

}
