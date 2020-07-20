// Largest Number formed from an Array
// https://www.geeksforgeeks.org/given-an-array-of-numbers-arrange-the-numbers-to-form-the-biggest-number/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool comp(string a, string b)
{
  string z = a + b;
  string w = b+a;

  return z>w;
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
      vector<string> vec;
      for(ll i = 0; i<n; i++)
      {
        ll intt; cin >> intt;
        ostringstream str1;
        str1<<intt;
        string temp = str1.str();
        vec.push_back(temp);
      }

      sort(vec.begin(), vec.end(), comp);
      for(auto i:vec)
        cout << i;

      cout << "\n";
	}
  return 0;
}
