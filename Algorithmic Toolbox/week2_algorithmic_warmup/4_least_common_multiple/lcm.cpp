#include<bits/stdc++.h>
using namespace std;
#define int long long int
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
int gc(int a,int b)
{
	if(b==0) return a;
	else gc(b,a%b);
}
main()
{
 int n,m,i,j;
 int k;
 cin>>n>>m;
 int a=n*m;
 cout<<(a/gc(n,m))<<endl;
}
