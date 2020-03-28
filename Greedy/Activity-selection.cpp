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

      ll s[n], e[n];

      for(ll i = 0; i<n; i++)
        cin >> s[i];

      for(ll i = 0; i<n; i++)
        cin >> e[i];


      vector<pair<ll,ll>> v;

      for(ll i = 0; i<n; i++)
        v.push_back(make_pair(e[i], s[i]));

      ll ans = 1;

      sort(v.begin(), v.end());

      ll i = 0, j = 1;
      while(j<n)
      {
          if(v[i].first <= v[j].second)
            {
              ans++;
              i = j;
            }

            j++;
        }

        cout << ans << "\n";
	}
}
