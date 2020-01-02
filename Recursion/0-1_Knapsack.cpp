#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll knapsack(ll * wt, ll *prices, ll N, ll W )
{
    if(W==0 ||N ==0)
        return 0;

    ll inc = 0, excl = 0;

    if(W>=wt[N-1])
        inc = prices[N-1] + knapsack(wt,prices,N-1,W-wt[N-1]);

    excl = 0 + knapsack(wt, prices, N-1, W);

    return max(inc , excl);

}


int main()
{
    ll wt[] = {2,7,3,4};
    ll prices[] = {5,20,20,10};
    ll N = 4;
    ll W = 11;

    cout << knapsack(wt,prices,N,W);
    

}