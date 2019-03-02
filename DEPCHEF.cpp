#include<bits/stdc++.h>
using namespace std;
int a[1000],b[1000],c[1000],in[1000],t,i,n;
bool g(int x, int y)
{
	return b[x]>b[y];
}
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
			cin>>b[i];
		for(i=0;i<n;i++)
		{
			c[i]=b[i]-a[i>0?i-1:n-1]-a[i<n-1?i+1:0];
			in[i]=i;
		}
		sort(in,in+n,g);
		for(i=0;i<n;i++)
			if(c[in[i]]>0)
				break;
		if(i==n)
			cout<<"-1\n";
		else
			cout<<b[in[i]]<<endl;
	}
}
