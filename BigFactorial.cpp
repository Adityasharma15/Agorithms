#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n = 5, j ,i=0 , t1 ,len = 0;
	
	int arr[10000]= {1};
	
	fill_n(arr, 10000, 1);
	
		for(j=n;j>0;j--)
{
		long long int carry = 0;
		i=0;
			
	    do
		{
		t1 = arr[i]*j + carry;
		arr[i] = t1%10;
		carry = t1/10;
		i++;

        

		if(i>=len)
		len = i;
		   
		    
				
		}while(i <=len-1);
}
		for(i = len ; i>=0 ; i--)
		{
			cout << arr[i];
		}
}
