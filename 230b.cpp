#include<bits/stdc++.h>
using namespace std;
long li[100000],c=0;
void SieveOfEratosthenes(long n) 
{ 
	
	bool prime[n+1]; 
	memset(prime, true, sizeof(prime)); 

	for (long p=2; p*p<=n; p++) 
	{ 
		
		if (prime[p] == true) 
		{ 
			
			for (long i=p*p; i<=n; i += p) 
				prime[i] = false; 
		} 
	} 
	for (long p=2; p<=n; p++) 
	if (prime[p])
	{ 
		li[c]=p;
		c++;
		//cout<<p<<" "; 
	}
} 
bool bsearch(long r, long f, long l)
{
	//cout<<l<<" "<<f<<endl;
	int m=f+(l-f)/2;
	if(li[m]==r)
		return true;
	else if(f<l)
	{
		if(li[m]>r)
			bsearch(r,f,m);
		else
			bsearch(r,m+1,l);
	}
	else
		return false;
	
}
int main()
{
	double n,x,r;
	long i,j;
	cin>>n;
	SieveOfEratosthenes(1000000);
	for(i=0;i<n;i++)
	{
		cin>>x;
		r=(long)sqrt(x);
		if(x-r*r==0 && x!=1)
		{
			if(bsearch(r,0,c-1))
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		else
			cout<<"NO"<<endl;
	}
}
