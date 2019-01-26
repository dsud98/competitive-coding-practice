#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long c=0,i,n,k,a[100001];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n,greater<long long>());
	while(a[0]>0)
	{
		while(a[n-2]<=0)
			n--;
		c+=a[n-1]<=0?a[n-2]-a[n-1]:a[n-2]-a[n-1]+1;
		for(i=0;i<n-1;i++)
		{
			a[i]-=a[n-1]<=0?a[n-2]-a[n-1]:a[n-2]-a[n-1]+1;
			//cout<<a[i]<<" ";
		}
		//cout<<a[i]<<endl;
		k=a[n-1];
		i=n-1;
		while(i>0 && k>a[i-1])
		{
			a[i]=a[i-1];
			i--;
		}
		a[i]=k;
	}
	cout<<c<<endl;
}
