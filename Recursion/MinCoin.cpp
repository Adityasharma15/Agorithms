// INCOMPLETE

#include<bits/stdc++.h>
using namespace std;

int mini(int a , int b , int c)
{
    if(a<=b)
        return (a>c)?c : a;

    else
        return (b>c)?c : b;
    
}


int minCoin(int n)
{

  if(n<=0)
  return 0;  
  
  else if(n==1)
  return 1;

  else if(n==7)
  return 1;

  else if(n==10)
  return 1;

  

  return mini(minCoin(n-1) , minCoin(n-7), minCoin(n-10));    
  
}

int main()
{
 
 int n; 
 cin >> n;

 cout << minCoin(n);

}