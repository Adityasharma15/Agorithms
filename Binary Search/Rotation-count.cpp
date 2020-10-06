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

     ll mini = INT_MAX;

     ll ans;

     for(ll i= 0; i<n; i++)
     {
            cin >> arr[i];

            if(arr[i]<mini)
              {
                ans = i;
                mini = arr[i];
              }
    }

          ll a = n - (ans - 1);

        cout <<a<< "\n";
	}

}
