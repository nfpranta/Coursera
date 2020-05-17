
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
int predecessor[mx];
int minstep[mx];
main(){
int  b,c,j,m,n,i,t,k,x;
cin>>n;
vector<int>res;
for(i=2;i<=n;i++)
{
	minstep[i]=minstep[i-1]+1;
	predecessor[i]=i-1;
	if(i%3==0)
	{
		if(minstep[i/3]<minstep[i])
		{
			minstep[i]=minstep[i/3]+1;
			predecessor[i]=i/3;
		}
	}
	if(i%2==0)
	{
		if(minstep[i/2]<minstep[i])
		{
			minstep[i]=minstep[i/2]+1;
			predecessor[i]=i/2;
		}
	}
}
for(i=n;i>0;i=predecessor[i])
{
	res.pb(i);
}
cout<<minstep[n]<<endl;
reverse(res.begin(),res.end());
fi(i,res.size()) cout<<res[i]<<gap;
cout<<endl;
}
