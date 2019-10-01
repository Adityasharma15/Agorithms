#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t, n , p;
	cin >> t;
	
	while(t--)
	{
		cin >> n;
		bool arr[ n+1 ];

		memset(arr, true, sizeof(arr)); 
		
		for(p = 2 ; p*p<=n; p++ )
	    {
	    	for(int x = 2; x*p<=n; x++)
	    	{
	    		arr[p*x]=false;
			}
	    	
		}
		
		for(int i=1;i<=n;i++)
		{
			if(arr[i]==true)
			cout << i << endl;
		}
		cout << endl;
	}
	
}
