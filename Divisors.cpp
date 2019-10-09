
//DIVISORS IN TIME COMPLEXITY sqrt(n)

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll int n;
	cin >> n;

	for(ll i = 2;  i <= sqrt(n); i++ )
	{
		if(n%i==0)
		{
			if(i!=n)
				cout << i << endl << n/i<< endl;

			else
				cout << i << endl;

		}

	}


}