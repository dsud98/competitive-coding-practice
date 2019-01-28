#include<bits/stdc++.h>
using namespace std;
bool val(long m)
{
	int s=0;
	while(m>0)
	{
		s+=m%10;
		m/=10;
	}
	if(s==10)
		return true;
	else
		return false;
}
int main()
{
	long k=0,m=19,n,a[10001];
	while(k<10000)
	{
		if(val(m))
		{
			a[k]=m;
			k++;
		}
		m++;
	}
	cin>>n;
	cout<<a[n-1]<<endl;
}
