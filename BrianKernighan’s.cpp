#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ll n, count = 0;
	cin >> n;

	while(n)
	{
		n= n&(n-1);
		count++;
	}

	cout << count << "\n";

}