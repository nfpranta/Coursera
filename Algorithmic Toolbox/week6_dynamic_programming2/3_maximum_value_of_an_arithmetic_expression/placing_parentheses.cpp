
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
#define mex 3000000
/*#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>*/
int mx[100][100];
int mn[100][100];
int arithmetic(int a,int b,char c)
{
	if(c=='+') return a+b;
	else if(c=='-') return a-b;
	else if(c=='*') return a*b;
}
 main()
{
   int i,j,len,k;
   string x ;
   cin>>x;
   len=x.size();
   int numberofopera=(len+1)/2;
   for(i=0;i<numberofopera;i++)
   {
   	 mn[i][i]=stoll(x.substr(2*i,1));
   	 mx[i][i]=stoll(x.substr(2*i,1));
   }
   for(i=0;i<numberofopera-1;i++)
   {
   	  for(j=0;j<numberofopera-i-1;j++)
	  {
	  	int mid=i+j+1;
	  	int mnvalue=LLONG_MAX;
	  	int mxvalue=LLONG_MIN;
	  	for(k=j;k<mid;k++)
		{
			int a=arithmetic(mn[j][k],mn[k+1][mid],x[2*k+1]);
			int b=arithmetic(mn[j][k],mx[k+1][mid],x[2*k+1]);
			int c=arithmetic(mx[j][k],mn[k+1][mid],x[2*k+1]);
			int d=arithmetic(mx[j][k],mx[k+1][mid],x[2*k+1]);
			mnvalue=min({mnvalue,a,b,c,d});
			mxvalue=max({mxvalue,a,b,c,d});
		//	cout<<mxvalue<<gap<<mnvalue<<endl;
		}
		mn[j][mid]=mnvalue;
		mx[j][mid]=mxvalue;
	  }
   }
   cout<<mx[0][numberofopera-1]<<endl;
}
