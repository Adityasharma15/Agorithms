#include<bits/stdc++.h>
#define ll long long

using namespace std;

void swap(ll* a, ll* b) 
{ 
    ll t = *a; 
    *a = *b; 
    *b = t; 
}


ll partition( ll *arr, ll s, ll e)
{
    ll pivot = arr[e];

    ll i = s - 1;

    for(ll j = s; j<=e-1; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }    

        
    } 

    swap(&arr[i+1] , &arr[e]);

    return i+1;
}


void quick(ll * arr, ll s, ll e)
{
    //tbr
    if(s<e)
    {

    ll i = partition(arr, s , e) - 1;

     quick(arr, 0, i);
     quick(arr, i , e); 

    }  

}


int  main()
{
    ll n;
    cin >> n;

    ll arr[n];

    for(ll i =0 ; i<n; i++)
        cin >> arr[i];

    
    quick(arr, 0, n-1);

    for(ll i =0; i<n; i++)
        cout << arr[i] << " ";

}