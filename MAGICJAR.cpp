#include<bits/stdc++.h>
using namespace std;
int main()
{
	long a[100001],t,i,n,s;
	cin>>t;
	while(t--)
	{
		s=0;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			s+=a[i];
		}
		cout<<s-n+1<<endl;
	}
}
