#include<bits/stdc++.h>
using namespace std;
#define int long long int
int a[900000];
int s[900003],p[900003];
main()
{
	int i,j,n,t;
	cin>>n;
	vector<int>v;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		p[i+1]=p[i]+a[i];
	}
	for(i=n-1;i>=0;i--)
	{
		s[i]=s[i+1]+a[i];
	}
	int S=p[n];
	for(i=0;i<n;i++)
	{
		p[i+1]=min(p[i],p[i+1]);
	}
	for(i=n-1;i>=0;i--)
	{
		s[i]=min(s[i],s[i+1]);
	}
	for(i=0;i<n;i++)
	{
		cout<<S-p[i]-s[i+1]<<" ";
	}
	cout<<endl;
}
