#include<bits/stdc++.h>
using namespace std;
long long findvalue(long long n, long long k)
{
	if(k==pow(2,n-1))
	{
		cout<<n<<endl;
		exit(0);
	}
	if(k>pow(2,n-1))
		k-=pow(2,n-1);
	findvalue(n-1,k);
}
int main()
{
	long long n,k;
	cin>>n>>k;
	findvalue(n,k);
}
