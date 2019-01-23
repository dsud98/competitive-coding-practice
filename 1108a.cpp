//problem: https://codeforces.com/problemset/problem/1108/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long a,b,c,d,n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a>>b>>c>>d;
		if(a!=d)
		cout<<a<<" "<<d<<endl;
		else
		cout<<b<<" "<<c<<endl;
	}
	
}
