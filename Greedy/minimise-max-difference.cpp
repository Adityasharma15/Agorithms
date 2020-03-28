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
		  ll k, n;
      cin >> k >> n;

      vector<ll> v(n);

      for(ll i = 0; i<n; i++)
        cin >> v[i];

      sort(v.begin(), v.end());

      ll minn = v[0], maxx = v[n-1];

      ll direct = maxx - minn;

      ll low = minn + k;
      ll high = maxx - k;

      if(low > high)
        swap(low, high);

      ll a, b;


      for(ll i = 1; i<n-1; i++)
      {

          a = v[i] - k;
          b = v[i] + k;

          if(a >= low || b<=high )
            continue;

            if(high - a <= b - low)
              low = a;

            else
              high = b;
      }

      cout << min(direct, high-low) << endl;


      // if((maxx - minn) < 2*k)
      //     cout << (maxx - minn) << "\n";
      //
      // else
      //   cout << ( (maxx - minn)  - 2*k) << "\n";

	}

}
