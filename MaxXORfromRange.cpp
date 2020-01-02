//MaxXORfromRange.cpp
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll msgbit(ll x)
{
	ll count = 0;	
	
	while(x)
	{
		count++;
		x >>= 1;
	}
		return count;
}

ll ans(ll place)
{
	ll answer = 0;
	ll temp = 1;

	while(place--)
	{
		answer+=temp;
		temp<<=1;
	}

	cout << "t "<<temp << "\n";
	return answer;
}


int main()
{	
	ll l, h;
	cin >> l >> h;

	ll x = h^l;

	ll place = msgbit(x);	

	cout << ans(place) << "\n";

}
