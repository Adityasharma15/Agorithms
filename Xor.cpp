#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll xorr(ll a, ll b)
{
    return (a|b) & (~a | ~b);
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll a, b;
        
        cin >> a >> b;

        cout << xorr(a, b);
    }
    


}