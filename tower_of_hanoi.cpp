#include<bits/stdc++.h>
#define ll long long
using namespace std;

void tower_of_hanoi(ll n ,  ll a,ll c,ll b)
{

if(n==1)
    {
        cout << "move disk 1 from rod " <<  a << " to rod " << c << "\n";
        return;
    }

tower_of_hanoi(n-1, a, b,c);
cout << "move disk " <<  n <<  "from rod " <<  a << " to rod " << c << "\n";
tower_of_hanoi(n-1,b,c,a);
}


int main()
{

ll t;
cin >> t;
while(t--)
{
    ll n;
    cin >> n;

    ll a = 1, c = 2 , b = 3;

    tower_of_hanoi(n , a, b, c);
}

cout << "\n";
}