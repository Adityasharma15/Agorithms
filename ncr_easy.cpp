#include<bits/stdc++.h>
#define ll long long
using namespace std;


ll ncr(ll n , ll r)
{
    ll arr[n+1][r+1];

    memset(arr, 0, sizeof(arr));

    // for(ll i = 0; i<=n; i++)
    // {
    //     for(ll j = 0; j<=n; j++)
    //     {
    //         arr[i][j]=0;
    //     }
    // }

    for(ll i = 0; i<=n; i++)
    {
        for(ll j = 0; j<= min(i,r); j++)
        {
            if(j==0 || i==j )
                arr[i][j]=1;
            

            else 
            {
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }

        }
    }

    return arr[n][r];

}



int main()
{
    ll n, r;

    cin>> n >> r;

    cout << ncr(n,r) << "\n";

}