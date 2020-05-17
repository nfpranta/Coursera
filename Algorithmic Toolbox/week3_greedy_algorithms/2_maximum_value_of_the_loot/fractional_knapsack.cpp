#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define INF 1e9+100
#define pii pair<double,double>
#define psi pair<double,pii>
#define ff first
#define ss second
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define FOR(i,n) for(i=0;i<n;i++)
#define REP(i,n) for(i=1;i<=n;i++)
#define pb push_back
#define mex 20000000
vector<psi>ans;
int n;
double  knapsack(double W)
{
	double weight=0,i,j;
	double value=0;
	for(i=0;i<n;i++)
	{
		if(weight+ans[i].ss.ff<=W)
		{
			weight+=ans[i].ss.ff;
			value+=ans[i].ss.ss;
		}
		else
		{
			double remain=W-weight;
			value+=ans[i].ss.ss*((double)remain/ans[i].ss.ff);
			break;
		}
	}
	return value;
}
main()
{
	int i,j,k;
	double weight;
	double value;
	double ratio;
	double total_weight;
	cin>>n>>total_weight;
	for(i=0;i<n;i++)
	{
		cin>>value>>weight;
		ratio=(value/weight);
		ans.pb({ratio,{weight,value}});
	}
	sort(ans.begin(),ans.end());
	reverse(ans.begin(),ans.end());
	double cost=knapsack(total_weight);
	cout<<fixed<<setprecision(5)<<cost<<endl;
}
