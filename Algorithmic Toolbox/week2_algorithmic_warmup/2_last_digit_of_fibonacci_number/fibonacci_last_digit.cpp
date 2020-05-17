#include<bits/stdc++.h>
using namespace std;
//#define int long long int
#define mod 1000000007
#define INF 1e9+100
#define pair<int,int> pii
#define ff first
#define ss second
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define FOR(i,n) for(i=0;i<n;i++)
#define REP(i,n) for(i=1;i<=n;i++)
#define pb push_back
#define mex 20000000
int f[mex];
main()
{
 int n,m,i,j;
 int k;
 cin>>n;
 f[0]=0;
 f[1]=1;
 for(i=2;i<=n;i++)
 {
 	f[i]=(f[i-1]+f[i-2])%10;
 }
 cout<<f[n]<<endl;
}
