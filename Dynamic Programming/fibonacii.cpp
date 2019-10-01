#include<bits/stdc++.h>
using namespace std;

//Recursive Approach
int fib(int n)
{
	if(n==0 || n==1)
		return n;
		
	else
	return fib(n-1) + fib(n-2);
}

//Dynamic Programming Approach
int TopDownDP(int n, int * dp)
{
	if(n==0 || n==1)
	{
		dp[n] = n;
		return n;
	}
	
	
	//Already computed
	if(dp[n]!=-1)
		return dp[n];
		 
	else
	{	//Compute and store it
		dp[n] = fib(n-1) + fib(n-2);
		return dp[n];
	}
}


int BottomUpDP(int n)
{
	int a,b,c;
	
	a = 0;
	b = 1;
	
	for(int i=2;i<=n;i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	
	return c;
	
}




int main()
{
	int dp[50];
	
	for(int i=0;i<50;i++)
		dp[i]=-1;
	
	
	cout << BottomUpDP(5) << endl;	
}
