#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
 
    ll int n;
    cin >> n;   

    ll int cents;
    cin >> cents;

    ll c[cents];

    for(ll i = 0 ; i < cents; i++)
        cin >> c[i];

    ll table[n+1];

    for(ll i = 0 ; i<=n; i++)
        table[i] = INT_MAX;


    table[0]=0;

    for( ll money = 1; money<= n; money++)
    {

        for(ll coin = 0; coin < cents; coin++)
        {

          if(c[coin] <= money)
          {
              ll smallerans = table[money-c[coin]];

              if(smallerans!=INT_MAX && smallerans + 1 < table[money])
                  {
                      table[money] = smallerans + 1;
                  }
          }

        }

         
        
    }
           if(table[n]!= INT_MAX)
                cout << table[n] << "\n";
            
            else
                cout << "-1" << "\n";

    }

}