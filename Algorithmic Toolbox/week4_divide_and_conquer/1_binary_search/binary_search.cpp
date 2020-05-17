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
/*#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
// find_by_order(k)  returns iterator to kth element starting from 0;
// order_of_key(k) returns count of elements strictly smaller than k;*/
main()
{
	int  i,j,n,m;
	cin>>n;
    int a[n+3];
    fi(i,n) cin>>a[i];
    cin>>m;
    int b[m+1];
    fi(i,m) cin>>b[i];
    fi(i,m)
    {
    	int low=0;
    	int high=n-1;
    	int ans=-1;
    	while(low<=high)
		{
			int mid=(low+high)/2;
			if(a[mid]==b[i])
			{
				ans=mid;
				break;
			}
			else if(a[mid]>b[i])
			{
			   high=mid-1;
			}
			else low=mid+1;
		}
		cout<<ans<<endl;
    }
}
