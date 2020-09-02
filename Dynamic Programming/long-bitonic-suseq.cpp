// Longest Bitonic subsequence
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

    vector<ll> vec(n);
    for(ll i = 0; i<n; i++)
      cin >> vec[i];

    vector<ll> inc(n, 1);
    vector<ll> dec(n, 1);

    for(ll i = 1; i<n; i++)
    {
          for(ll j = i-1; j>=0; j--)
          {
            if(vec[j] < vec[i])
              inc[i] = max(inc[i], inc[j]+1);
          }
    }

    for(ll i = n-2; i>=0; i--)
    {
      for(ll j = i+1; j<n; j++)
      {
        if(vec[j] < vec[i])
          dec[i] = max(dec[i], dec[j]+1);
      }
    }

    ll maxx = 1;
    for(ll i = 0; i<n; i++)
    {
      // always -1 because there will be a 1
      // from dec[i] always, even if there is no dec
      // and this also applies to inc, so always
      // one -1.
      maxx = max(maxx, (dec[i] + inc[i]) - 1);
    }

    cout << maxx << "\n";

	}

  return 0;

}
