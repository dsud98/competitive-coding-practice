#include<bits/stdc++.h>
using namespace std;
int main()
{
	double l,a[1001],m=0,t;
	int i,n;
	cin>>n>>l;
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	m=t=a[0];
	for(i=0;i<n-1;i++)
	{
		t=(double)(a[i+1]-a[i])/2;
		if(t>m)
		{
			m=t;
		}
	}
	t=l-a[i];
	if(t>m)
			m=t;
	cout<<fixed<<setprecision(6)<<m<<endl;
}
