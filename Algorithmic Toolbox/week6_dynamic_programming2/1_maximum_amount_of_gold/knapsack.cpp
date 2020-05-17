
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
#define mx 3000000
/*#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>*/
int dp[302][30002];//vector<vector<int>>dp(n,vector<int>(W,0))
main()
{
	int i,j,n,m,p,k;
	int W;
	cin>>W>>n;
	int a[n+4];
	fi(i,n) cin>>a[i];
    for(i=0;i<=n;i++)
	{
		for(j=0;j<=W;j++)
		{
			if(i==0 or j==0) dp[i][j]=0;
			else if(a[i-1]<=j)
			{
				dp[i][j]=max(dp[i-1][j],a[i-1]+dp[i-1][j-a[i-1]]);
			}
			else dp[i][j]=dp[i-1][j];
		}
	}
	cout<<dp[n][W]<<endl;
}
