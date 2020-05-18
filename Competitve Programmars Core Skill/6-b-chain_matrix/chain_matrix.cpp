#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long int
#define INF 1e9+100
#define pair<int,int> pii
#define ff first
#define ss second
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define FOR(i,n) for(i=0;i<n;i++)
#define REP(i,n) for(i=1;i<=n;i++)
#define pb push_back
#define  debug(x)  cout<<#x<<" "<<x<<endl;
main()
{
int i,j,n,t,b,k;
cin>>n;
int a[300];
int m[200][200];
for(i=1;i<=n;i++) m[i][i]=0;
int d=1;
for(i=0;i<=n;i++) cin>>a[i];
for(d=2;d<=n;d++)
{
	for(i=1;i<n-d+2;i++)
	{
		j=i+d-1;
		m[i][j]=INT_MAX;
		for(k=i;k<=j-1;k++)
		{
			int q=m[i][k]+m[k+1][j]+a[i-1]*a[k]*a[j];
			if(q<m[i][j])
			{
				m[i][j]=q;
			}
		}
	}
}
cout<<m[1][n]<<endl;
}

