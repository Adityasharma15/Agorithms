#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n;
    cin >> n;

    ll arr[n];

    for(ll i =0; i<n; i++)
        cin >> arr[i];

    ll ptr, key;

    for(ll i =0; i<n; i++)
    {
        ptr = i + 1;

        while(ptr < n)
        {
          if(arr[ptr] < arr[i])
            swap(arr[ptr], arr[i]);

            ptr++;  
        }


    }


    
    for(ll i =0; i<n; i++)
        cout << arr[i] << " ";


}