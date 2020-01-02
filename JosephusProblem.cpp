#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll josephus(ll n , ll k)
{
	if(n==2)
		return 1;

	return (josephus(n-1,k) + k-1)%n + 1;
}

int main()
{ 
		ll n,k;
		do
		{
		cin >> n >> k;
			
		cout << josephus(n,k) + k-1 << endl;
		}while(n!=0 && k!=0);
		
}
