// LCS of three strings

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

	ll t;
	cin >> t;

	while(t--)
  {
    int n , m, l;
    cin >> n >> m >> l;

    string text1, text2, text3;
    cin >> text1 >> text2 >> text3;

    int dp[n+1][m+1][l+1];

    for(int i = 0; i<=n; i++)
    {
        for(int j = 0; j<=m; j++)
        {
            for(int k = 0; k<=l; k++)
               dp[i][j][k] = 0;
        }
    }

   for(int i = 1; i<=n; i++)
   {
       for(int j = 1; j<=m; j++)
       {
         for(int k = 1; k<=l; k++)
         {
           if(text1[i-1] == text2[j-1] && text1[i-1] == text3[k-1])
               dp[i][j][k] = 1 + dp[i-1][j-1][k-1];

           else
               dp[i][j][k] = max(dp[i-1][j][k], max( dp[i][j-1][k], dp[i][j][k-1]));
         }
       }
   }

   cout << dp[n][m][l] << "\n";

	}

  return 0;

}
