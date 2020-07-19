#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ll n;
    cin >> n;

    ll arr[n];

    for(ll i =0 ;i<n;i++)
        cin >> arr[i];

    ll last = n , start , end, i = 0;

    while(last>0)
    {
        start=i;
        end = i+1;

        while(end < last )
        { 
            if(arr[start] > arr[end])
                swap(arr[start], arr[end]);

            start++;
            end++;              
        }


        last--;
    }

    for(ll i = 0; i<n; i++)
        cout << arr[i] << " ";

}
