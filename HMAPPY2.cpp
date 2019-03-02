#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,a,b,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>a>>b>>k;
		string c=(n/a+n/b-n/(a*b/__gcd(a,b))-n/(a*b/__gcd(a,b)))<k?"Lose\n":"Win\n";
		cout<<c;
	}	
}
