#include<bits/stdc++.h>
#define ll long long
using namespace std;

int C(int n, int r)
{
	ll int C[n+1][r+1];
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=min(i,j);j++)
		{
			if(j==0|| j==i)
				C[i][j]=1;
				
			else
				C[i][j]=C[i-1][j-1] +C[i-1][j];	
			
		}
	}
	
	return C[n][r];
}


int main()
{
	ll int n,r;
	cin >> n >> r;
		
	cout << C(n,r)<<endl;
	
}
