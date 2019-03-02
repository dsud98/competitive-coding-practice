#include<bits/stdc++.h>
using namespace std;
int main()
{
	long t,i,l,c,j,d[1000000];
	string str;
	cin>>t;
	while(t--)
	{
		long v[26]={0},c=0,m=LONG_MAX,s=0;
		cin>>str;
		l=str.length();
		for(i=0;i<l;i++)
		{
			if(v[int(str[i])-65]==0)
				c++;
			v[int(str[i])-65]++;	
		}
		sort(v,v+26,greater<long>());
		j=0;
		for(i=1;i<=min(l,(long)26);i++)
		{
			if(l%i==0)
			{
				d[j]=i;
				j++;
			}
		}
		while(j--)
		{
			s=0;
			for(i=0;i<c;i++)
			{
				if(v[i]>l/d[j])
					s+=v[i]-l/d[j];
				else if(i>=d[j] && v[i]<l/d[j])
					s+=v[i];
			}
			m=min(s,m);
		}
		cout<<m<<endl;
	}
}
