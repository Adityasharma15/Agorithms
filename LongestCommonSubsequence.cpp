#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll LCS(string s, string s1, ll ls , ll ls1)
{

// ll ls = s.length();
// ll ls1 = s.length();

ll arr[ls+1][ls1+1];

for(int i=0;i<=ls;i++)
{
	for(int j=0;j<=ls1;j++)
		arr[i][j]=0;
}

for(ll i = 0;i<=ls; i++)
{
	for(ll j = 0 ; j<=ls1; j++)
	{	
		 if(i==0 || j==0)
		 	arr[i][j]=0;
		
		 else if(s[i-1]==s1[j-1])
				{
					// cout << "i " << i << " j " << j << "  " << s[i-1] <<"\n";
					// cout << arr[i][j] <<"\n";
					arr[i][j] = arr[i-1][j-1] + 1;
					// cout << arr[i][j] <<"\n";
				}	
		else
			arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
			}
}

// for(int i=0;i<=ls;i++)
// {
// 	for(int j=0;j<=ls1;j++)
// 		cout << arr[i][j] << " ";

// 	cout << "\n";
// }

return arr[ls][ls1];

}


int main()
{	
	ll t;
	cin >> t;

	while(t--)
	{
	ll x, y;
	cin >> x >> y;	
	string s, s1;
	cin >> s >> s1;

	cout << LCS(s,s1, x, y) << "\n";
	}
}