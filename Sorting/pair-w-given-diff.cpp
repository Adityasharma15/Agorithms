// Find Pair Given Difference
// https://www.geeksforgeeks.org/find-a-pair-with-the-given-difference/

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

    ll n, diff;
    cin >> n >> diff;

    vector<ll> vec(n);
    for(ll i = 0; i<n; i++)
      cin >> vec[i];

    sort(vec.begin(), vec.end());
    bool ans = false;
    for(ll i = 0; i<n ;i++)
    {
        if(binary_search(vec.begin(), vec.end(), vec[i] +diff))
        {
          ans = true;
          break;
        }
    }

    if(ans)
      cout << "1\n";

    else
      cout <<"-1\n";
	}
  return 0;
}
