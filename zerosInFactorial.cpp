#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin >> t;
	
	while(t--)
	{
	
	
	long long int n;
	//cout << "Enter the number to find no of zeros in its factorial" << endl;
	cin >> n;
	
	long long int zeros = 0;
	
	for (int i=5; n/i>=1; i*=5)
	{
		zeros += floor(n/i);
	}
	
	cout << zeros << endl;
	
}
}
