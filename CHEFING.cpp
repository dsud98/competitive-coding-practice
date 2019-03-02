#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i,j,c,l;
	string s;
	cin>>t;
	while(t--)
	{
		int v[1001][27]={0};
		c=0;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>s;
			l=s.length();
			for(j=0;j<l;j++)
				v[i][int(s[j])-97]=1;
		}
		for(j=0;j<26;j++)
		{
			for(i=0;i<n;i++)
				if(v[i][j]!=1)
					break;
			if(i==n)
				c++;
		}
		cout<<c<<endl;
	}
}
