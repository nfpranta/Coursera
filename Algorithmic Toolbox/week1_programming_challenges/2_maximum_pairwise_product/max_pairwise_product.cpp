#include<bits/stdc++.h>
using namespace std;
#define int long long int
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
/*#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>*/
int numbers[mex];
main()
{
	int n,m;
	cin>>n;
	fi(i,n) cin>>numbers[i];
	int maxindex1=-1;
	int maxindex2=-1;
	fi(i,n)
	{
		if(maxindex1==-1 or numbers[maxindex1]<numbers[i])
		{
			maxindex1=i;
		}
	}
	fi(i,n)
	{
		if((i!=maxindex1) and  numbers[i]>numbers[maxindex2])
		{
			maxindex2=i;
		}
	}
	cout<<numbers[maxindex1]*numbers[maxindex2]<<endl;
}
