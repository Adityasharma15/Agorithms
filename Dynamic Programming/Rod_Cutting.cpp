#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ll len;
    cin >> len;

    ll parts;
    cin >> parts;

    ll cost[parts];
    
    for(ll i = 0; i<parts; i++)
        cin >> cost[i];



    ll rodcutting[parts+1][len +1];
    
    for(ll i = 0; i<=parts ; i++)
    {
        for(ll j = 0; j<=len;j++)
        {
            if(i==0 || j==0)
                rodcutting[i][j]=0;

            else if(i > j)
                rodcutting[i][j] = rodcutting[i-1][j];

            else if(i<=j)
                {
                    rodcutting[i][j] = max(cost[i-1] + rodcutting[i][j-i] , rodcutting[i-1][j]);
                }     

        }
    }

    cout << "ans " << rodcutting[parts][len] << endl;

        //    for(ll i = 0; i<=parts ; i++)
        //    {
        //         for(ll j =0; j<=len;j++)
        //             cout << rodcutting[i][j] << " ";

        //         cout << endl;}
}