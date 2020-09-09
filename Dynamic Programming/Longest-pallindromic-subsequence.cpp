#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;

  int len = s.length();

  int dp[len][len];

  memset(dp, 0, sizeof(dp));

  for(int i = 0; i<len; i++)
  {

    for(int j = 0; j<len; j++)
    {

      if(i==j)
      {
        dp[i][j] = 1;
        continue;
      }

      if(j>i)
        continue;

      if(s[i] == s[j])
            dp[i][j] = 2 + dp[i-1][j-1];

      if(s[i] != s[j])
          dp[i][j] = max(dp[i-1][j], dp[i][j-1]);

    }

  }

  cout << dp[len-1][len-1];

}
