//Make a 2D array with elements of array at one side and counting upto n in one
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll int n;
	cin >> n;

	ll arr[n];

	for(int i = 0; i<n;i++)
		cin >> arr[i];

	ll x = sizeof(arr)/sizeof(arr[0]);

	sort(arr, arr+ x);

	ll int sum;
	cin >> sum;

    ll matrix[n+1][sum+1];	

	for(ll i = 0; i<=n; i++)
		matrix[i][0]=1;

	for(ll i = 0; i<=sum; i++)
		matrix[0][i]=0;

	for(ll i = 1; i<=n ; i++)
	{
		for(ll j = 1; j<=sum; j++)
			{
				if(arr[i-1] < j)
					matrix[i][j] = matrix[i-1][j];

				else if(arr[i-1] == j)
					matrix[i][j] = 1;

				else if(arr[i-1] > j )
				{
					matrix[i][j] = matrix[i-1][arr[i-1] - j];
				}
				
			}
	} 
	
	// for(ll i = 0; i<=n ; i++)
	// {
	// 	for(ll j = 0; j<=sum; j++)
	// 		{
    //               cout <<  matrix[i][j] << " ";
	// 		}	

	// 		cout << "\n";  
	// }
	
	if(matrix[n][sum]==1)
		cout << "POSSIBLE" <<"\n";

	else
		cout << "NOT POSSIBLE" << "\n";
	
	
}