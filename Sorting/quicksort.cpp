#include<bits/stdc++.h>
#define ll long long
using namespace std;


// A teacher orders students to align quickly in order
// Each Student tries to arrange himself by looking around himself.

// PIVOT USED

void quicksort(ll * arr, ll int l, ll int h)
{
	ll pivot = arr[l];

	ll x = l, y = h;

	while(y>l)
	{	
	do
	{
	 x++;
	}while(arr[x]<=pivot);

	do
	{
		y--;
	}while(arr[y]>pivot);

	swap(arr[x], arr[y]);

	}

	swap(arr[l], arr[y]);

	for(ll i = 0; i< n; i++)
		cout << arr[i] << " ";
}


int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);


ll int n;
cout << "Enter the lenght of array" << endl;
cin >> n;

ll arr[n];

cout << "Enter the elements of the array" << endl;

for (ll int i = 0; i < n; ++i)
	cin >> arr[i];


quicksort(arr,0 , n);

}