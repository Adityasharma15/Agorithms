#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;
	cout << "Enter no to find digits in factorial of" << endl;
	cin >> n;
	
	long long int fac = 1;
	
	for(int i=1;i<=n;i++)
	{
		fac*=i;
	}
	
	cout << floor(log10(fac)) + 1 << endl;
}
