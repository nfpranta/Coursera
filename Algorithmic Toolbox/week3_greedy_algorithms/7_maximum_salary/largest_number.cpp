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
bool comp(int a,int b)
{
	string x,y;
	x+=to_string(a);
	x+=to_string(b);
	y+=to_string(b);
	y+=to_string(a);
	return x>y;
}
main()
{
	int  i,j,n,m;
	cin>>n;
	vector<int>a(n);
	fi(i,n)
	{
		cin>>a[i];
	}
    sort(a.begin(),a.end(),comp);
    for(auto v:a) cout<<v<<endl;
    string x;
    for(auto v:a) x+=to_string(v);
    cout<<x<<endl;
}