
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
int ans[200][200][200];
main()
{
	int i,j,n,m,p,k;
	cin>>n;
	int a[n+2];
	fi(i,n) cin>>a[i];
	cin>>m;
	int b[m+2];
	fi(i,m) cin>>b[i];
	cin>>p;
	int c[p+4];
	fi(i,p) cin>>c[i];
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=m;j++)
		{
			for(k=0;k<=p;k++){
			if(i==0 or j==0 or k==0) ans[i][j][k]=0;
			else if(a[i-1]==b[j-1] and a[i-1]==c[k-1]) ans[i][j][k]=ans[i-1][j-1][k-1]+1;
			else ans[i][j][k]=max(ans[i][j-1][k],max(ans[i-1][j][k],ans[i][j][k-1]));
		}
	}
	}
	cout<<ans[n][m][p]<<endl;
}