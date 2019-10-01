#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		
		int x,y,z;
		stack<int > pre;
		
		long long int len = s.length();
		
		//cout << s[len-1] << endl;
		
		for(int i = len - 1 ; i>=0 ; i--)
		{
			if(s[i]=='+' || s[i]=='-' || s[i]=='*'|| s[i]=='/' )
			{
				x = pre.top();
				pre.pop();
				
				//cout << "x " << x << endl;
				
				y = pre.top();
				pre.pop();
				
				//cout << "Y" << y << endl;
				
				if(s[i]=='+')
				z=x+y;
				
				if(s[i]=='-')
				z=x-y;
				
				if(s[i]=='*')
				z=x*y;
				
				if(s[i]=='/')
				z=x/y;
				
				pre.push(z);
			}
			
			else
			{
				pre.push(s[i] - 48);
			}
		}
		
		cout << z << endl;
	}
}
