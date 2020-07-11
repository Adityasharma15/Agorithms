// Mobile numeric keypad
// https://www.geeksforgeeks.org/mobile-numeric-keypad-problem/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll keypaddp[10][31];
ll keypad[4][3] = { {1,2,3},
                    {4,5,6},
                    {7,8,9},
                    {-1,0,-1}
                  };
ll movesx[5] = {0 , -1, 1, 0, 0};
ll movesy[5] = {0 , 0, 0, -1, 1};

ll solvekeypad(ll num)
{
  if(num == 1)
    return 10;

  memset(keypaddp, 0, sizeof(keypaddp));

  ll ans = 0;
  for(ll i =0; i<10; i++)
      keypaddp[i][1] = 1;

  for(ll x = 2; x<=num; x++)
  {
    ll temp;
    for(ll i = 0; i<4; i++)
    {
      for(ll j = 0; j<3; j++)
      {
        temp = keypad[i][j];

        if(temp == -1)
            continue;

        for(ll y = 0; y< 5; y++)
        {
            ll ti = i + movesx[y];
            ll tj = j + movesy[y];

            if(ti>=0 && ti<4 && tj>=0 && tj<3 && keypad[ti][tj]!=-1)
            {
              keypaddp[keypad[i][j]][x] += keypaddp[keypad[ti][tj]][x-1];

              // if(i==0 && j == 0)
                // cout << keypaddp[keypad[i][j]][x] << "**\n";
            }
        }
      }
    }
  }

  // for(ll i = 0; i<4; i++)
  // {
  //   for(ll j = 0; j<3; j++)
  //   {
  //     cout << keypad[i][j] << " ";
  //   }
  //   cout << "\n";
  // }

  // for(ll i = 0; i<10; i++)
  // {
  //   for(ll j = 1; j<=3; j++)
  //   {
  //     cout << keypaddp[i][j] << " ";
  //   }
  //   cout << "\n";
  // }


  for(ll i = 0; i<10; i++)
  {
      ans+= keypaddp[i][num];
  }

      return ans;
}

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

	ll t;
	cin >> t;
	while(t--)
  {
    ll num;
    cin >> num;

    ll ans = solvekeypad(num);
    cout << ans << "\n";
	}
  return 0;
}
