#include<bits/stdc++.h>
using namespace std;
#define int long long int


typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef vector<pii> vii;

#define mod 1000000007
#define INF 1e9+100
#define ff first
#define ss second
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define urs(r...)          typename decay<decltype(r)>::type
#define fi(i,n)                for(urs(n) i=0;i<n;i++)
#define rep(i,n)               for(urs(n) i=1;i<=n;i++)
#define pb push_back
#define gap ' '
#define endl '\n'
#define mex 300000
#define what_is(x)              cerr << #x << " is " << x << endl;
int dp[4000];
int coins[]={1,3,4};
main()
{
	int i,j,n;
	cin>>n;
	memset(dp,INF,sizeof dp);
	dp[0]=0;
	rep(i,n)
	{
		fi(j,3)
		{
			if(coins[j]<=i)
			{
				int numberofcoins=dp[i-coins[j]];
				if(numberofcoins!=INF and numberofcoins+1<dp[i])
				{
					dp[i]=numberofcoins+1;
				}
			}
		}
	}
	cout<<dp[n]<<endl;
}
