// if difference between count of set bits at
// odd positions and even positions is multiple of 3
// then the number is also a multiple of 3.

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
    string s;
    cin >> s;

    ll odds = 0, evens = 0;

    for(ll i = 0; i<s.length(); i++)
    {
      if(i%2==0 && s[i] == '1')
        evens++;

      if(i%2!=0 && s[i]=='1')
        odds++;
    }

    // cout << odds << " " << evens << "\n";

    ll ans = abs(odds - evens);

    if(ans%3==0)
      cout << "1\n";

    else
      cout << "0\n";

	}

  return 0;
}
