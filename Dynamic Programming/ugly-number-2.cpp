// 264. Ugly Number II

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

    vector<ll> ugly(n);
    ugly[0] = 1;

    ll ptr2 = 0, ptr3 = 0, ptr5 = 0;
    ll next_multiple_of_2 = 2;
    ll next_multiple_of_3 = 3;
    ll next_multiple_of_5 = 5;
    ll next_ugly_number = 1;

    for(ll i = 1; i<n; i++)
    {
      next_ugly_number = min(next_multiple_of_2,
        min(next_multiple_of_3, next_multiple_of_5));

      ugly[i] = next_ugly_number;

      if(next_ugly_number == next_multiple_of_2)
          next_multiple_of_2 = ugly[++ptr2]*2;

      if(next_ugly_number == next_multiple_of_3)
          next_multiple_of_3 = ugly[++ptr3]*3;

      if(next_ugly_number == next_multiple_of_5)
          next_multiple_of_5 = ugly[++ptr5]*5;
    }

    cout << next_ugly_number << "\n";
	}

  return 0;

}
