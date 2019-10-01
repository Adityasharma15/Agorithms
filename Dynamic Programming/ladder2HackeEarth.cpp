#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int TopDownDP(ll int cur ,ll int * dp , ll int k)
{
	if(cur==0)
	{
		dp[cur]=cur;
		return 1;
	}
		
	
	if(cur==2)
	{
		dp[cur]=1;
		return 1;
	}
	
	if(cur==k)
	{
		dp[cur]=1;
		return 1;
	}
		
	if(dp[cur]!=-1)
		return dp[cur];
	
	else
	{
		dp[cur]=TopDownDP(cur-2, dp , k) + TopDownDP(cur-5 ,dp, k) + TopDownDP(cur-k, dp,k);
		return dp[cur];
	}

}


int main()
{
	ll int t;
	cin >> t;
	
	ll int n;
	cin >> n;
	
	while(t--)
	{
	
	ll int cur , k;
	cin >> cur;
	cin >> k;
	
	ll int dp[n+1];
	
	for(int i=0;i<n+1;i++)
		dp[i]=-1;
	
	cout << TopDownDP(cur,dp,k);
	}
}
