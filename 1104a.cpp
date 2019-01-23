#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,f=0,j;
	cin>>n;
	for(i=min(9,n-1);i>1;i--)
	{
		if(n%i==0)
		{
			f=i;
			break;
		}
	}
	//cout<<f<<endl;
	if(f!=0)
	{
		cout<<n/f<<endl;
		for(j=0;j<n/f;j++)
		cout<<i<<" ";
	}
	else
	{
		cout<<n<<endl;
		for(j=0;j<n;j++)
		cout<<"1 ";
	}
}
