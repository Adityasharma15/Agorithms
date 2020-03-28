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

    ll arr[n];

    for(ll i = 0; i<n; i++)
      cin >> arr[i];

    ll cap;
    cin >> cap;

    ll faults = 0;

    unordered_map<ll, ll > mapp;

    unordered_set<ll> sett;

    for(ll i = 0; i<n; i++)
    {

      if(sett.size() < cap)
      {

        if(sett.find(arr[i]) == sett.end())
        {
          faults++;

          sett.insert(arr[i]);
        }

        mapp[arr[i]] = i;

      }

      else
      {
          if(sett.find(arr[i]) == sett.end())
          {

              faults++;

              ll mini = INT_MAX;

              ll del;

              for(auto j:sett)
              {
                  if(mini>mapp[j])
                  {
                    mini = mapp[j];
                    del = j;
                  }

              }

              sett.erase(del);

              sett.insert(arr[i]);

          }

            mapp[arr[i]] = i;

      }

    }

      cout << faults << "\n";

	}

}
