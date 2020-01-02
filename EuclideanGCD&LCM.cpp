
// EUCLIDEAN ALGORITHM TO FIND GCD OF TWO NUMBERS WHICH STATES THAT GCD DOES NOT CHANGE IF WE SUBTRACT SMALLER NUMBER FROM BIGGER NUMBER
// IN MORE EFFICIENT APPROACH, WE USE MODULO

#include<bits/stdc++.h>
#define ll long long 

using namespace std;

ll gcd(ll int a, ll int b)
{
	if(b==0)
		return a;

	return gcd(b,a%b);
}

ll LCM(ll int a, ll int b)
{
	return (a*b)/gcd(a,b);
}



int main()
{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);

	ll int t;
	cin >> t;

	while(t--)
	{	

	ll int a , b;

	// cout << "The two numbers to find gcd of are : " << /n;
	cin >> a >> b ;

	cout <<LCM(a,b) << " " << gcd(a , b) << endl;
	}
}
