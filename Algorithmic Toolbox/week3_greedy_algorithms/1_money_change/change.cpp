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
int n;
main()
{
	int i,j,k;
	int total_weight;
	cin>>total_weight;
	int ten=total_weight/10;
	total_weight-=10*ten;
	int remainder=total_weight/5;
	total_weight-=remainder*5;
	cout<<ten+remainder+total_weight<<endl;
}
