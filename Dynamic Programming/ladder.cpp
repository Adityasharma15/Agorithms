#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int TopDownDP(ll int n ,ll int * dp)
{
	if(n==0 || n==1)
		{
		dp[n]=n;
		return 1;
		}
		
	
	if(n<0)
	{
		return 0;
	}
		
	if(dp[n]!=-1)
		return dp[n];
	
	else
	{
		dp[n]=TopDownDP(n-1, dp) + TopDownDP(n-2 ,dp) + TopDownDP(n-3, dp);
		return dp[n];
	}

}


int main()
{
	
	
	ll int n;
	cin >> n;
	
	ll int dp[100];
	
	for(int i=0;i<100;i++)
		dp[i]=-1;
	
	cout << TopDownDP(n,dp);
	
}
