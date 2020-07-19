#include <bits/stdc++.h>
#define ll long long

using namespace std;
insertionsort(ll int * arr,ll int l , ll int h )
{
	if(l==h)
	return 0;

	ll hole = arr[l];

	ll x = l;

	while(hole<arr[x] && x>=0)
	{
		swap(arr[l],arr[x]); // Problematic
		x--;
	}

	insertionsort(arr, l+1, h);

	printArray(arr,h);

}


printArray(ll int * arr,ll int h)
{
	for (int i = 0; i < h; ++i)
	{
		cout << arr[i] << " ";
	}
}



int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);

ll int n;
cout << "Enter the size of array" << endl;
cin >> n;

ll arr[n];
cout << "Enter the array" << endl;
for (int i = 0; i < n; i++)
	 cin >> arr[i];

insertionsort(arr, 0 , n)

}