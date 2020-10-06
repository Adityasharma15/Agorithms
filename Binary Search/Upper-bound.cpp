#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

  vector<ll> vec{-1,2, 17, 18, 33};

  cout << ((upper_bound(vec.begin(), vec.end(), 32)) - vec.begin());


  return 0;

}
