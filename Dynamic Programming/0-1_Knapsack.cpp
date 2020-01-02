#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll dp[1001][1001];

ll knapsack(ll wt[], ll price[], ll N, ll W)
{

    for(ll i=0; i<=N; i++)
    {
        for(ll j=0; j<=W;j++)
        {           
        if(i==0 || j==0)    
            dp[i][j]= 0;

        else if(j>=wt[i-1])
            dp[i][j]= max(price[i-1] + dp[i-1][j-wt[i-1]] , dp[i-1][j]);
        else
            dp[i][j] = dp[i-1][j];
        }
    }

    return dp[N][W];

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--)
    {
        ll N, W;
        cin >> N >> W;

        ll wt[N], price[N];

        for(ll i = 0; i< N; i++)
            cin >> price[i];

        for(ll i = 0 ; i< N; i++)
            cin >> wt[i];

         cout << knapsack(wt, price, N , W) <<"\n";   
    }

}