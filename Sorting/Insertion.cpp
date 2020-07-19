#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ll int n;
	cout << "Enter the length of array" << endl;
	cin >> n;
	
	ll int arr[n];
	
	cout << "Enter the array "<< endl;
	
	for(ll i=0;i<n;i++)
		cin >> arr[i];
	

	long long int ptr = 1;
		
	for(long long int x= 1; x<=i; x++)
	{ 	   
	  for(long long int j = 0; j< ptr; j++)
	  {
		  if(arr[x] <= arr[j])
		  {
		      long long int temp = arr[x];
		      arr[x] = arr[j];
		      arr[j] = temp;
		  }

	  } 
		
	  ptr++;

	}

	for(ll i=0; i<n;i++)
	{
		cout << arr[i] <<" ";
	}
	
}
