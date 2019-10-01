#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isSafe(int board[][10] ,int i ,int j )
{
	ll int m = i;
	ll int n = j;
	
	//checking for same column
	while(i>0)
	{
		if(board[i][j]==1)
		return false;
		
	i--;	
	}
	
	i = m;
	j = n;
	
	//Checking for left diagonal
	
	while(i>0 && j>0)
	{
		if(board[i][j]==1)
		return false;
	
	i--;
	j--;
	}
	
	//Checking for right diagonal
	
	i = m;
	j = n;
	
	while(i>0 && j>0)
	{
		 if(board[i][j]==1)
		 return false;
		 
	i--;
	j++;	
	}
	
	return true;
}

bool solveNqueen(int board[][10], int x , int n)
{
	ll int j;
	
	if(x==n)
	{
		for( int i = 0;i<n;i++)
		{
			cout << "ok"<<endl;
			for( j=0;j<n;j++)
			{
			if(board[i][j]==1)
				cout << "Q";
			else
				cout<<"_";
			}
		cout << endl;
		}
	
	return true;
	}

	for(j=0;j<n;j++)
	{
		if(isSafe( board, x , j))
			board[x][j]=1;
			
		
		bool nextCanbePlaced = solveNqueen(board, x , n-1);
		
		if(nextCanbePlaced)
		return true;
			
		
		board[x][j]=0;
	}

	return false;

}

int main()
{
	int n;
	cin >>n;
	
	int board[10][10] = {0};
	
	if(solveNqueen( board,0, n))
	{
	}
	else
	cout << "Solution does not exist" << endl;		
}
