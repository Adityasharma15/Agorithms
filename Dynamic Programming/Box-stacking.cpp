// Box Stacking Dynamic Programming
// https://www.geeksforgeeks.org/box-stacking-problem-dp-22/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

//we compare with area bcoz if
// area is less, no chance that both length
// and height will be greater
bool comp(pair< pair<ll,ll>, ll> p1 , pair< pair<ll,ll>, ll> p2)
{
  ll area1 = p1.first.first * p1.first.second;
  ll area2 = p2.first.first * p2.first.second;
  return (area1>area2);
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
     ll n;
     cin >> n;
     vector<pair< pair<ll,ll> , ll> > boxes;

     for(ll i = 0; i<n; i++)
     {
        ll a, b, c;
        cin >> a >> b >> c;

        ll x, y, z;
        x = max(a,b);
        y = min(a,b);
        z = c;
        boxes.push_back( { {x,y} , z} );

        x = max(a,c);
        y = min(a,c);
        z = b;
        boxes.push_back( { {x,y} , z} );

        x = max(b,c);
        y = min(b,c);
        z = a;
        boxes.push_back( { {x,y} , z} );
     }

     sort( boxes.begin(), boxes.end(), comp);
     vector<ll> dp((boxes.size()), 0);
     vector<ll> heights((boxes.size()) , 0);

     for(ll i = 0; i<dp.size(); i++)
        {
	  // if that box alonse is used
	  // so storing its height
          dp[i] = boxes[i].second;
          heights[i] = boxes[i].second;
        }

      ll maxheight = 0;
      for(ll i = 1; i<dp.size(); i++)
      {
        for(ll j = 0; j<i; j++)
        {
          if( boxes[j].first.first > boxes[i].first.first && boxes[j].first.second > boxes[i].first.second  )
            dp[i] = max(dp[i], dp[j] + heights[i]);
        }
        maxheight = max(maxheight, dp[i]);
      }

      cout << maxheight << "\n";
	}
  return 0;
}
