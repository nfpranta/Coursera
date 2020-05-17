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
vector<int>quick_sort_partition3(vector<int>&a,int l,int r)
{
	int firs=l;
	int sec=r;
	int i=l;
	int x=a[l];
	vector<int>ans(2);
	while(i<=sec)
	{
		if(a[i]<x)
		{
			swap(a[i],a[firs]); //Make sure to keep the lowest value in the leftmost region and the hightest values in the rightmost region
			i++;
			firs++;
		}
		else if(a[i]==x) i++;
		else
		{
			swap(a[i],a[sec]);
			sec--;
		}
	}
	ans[0]=firs;
    ans[1]=sec;
    return ans;
}
void randomized_quick_sort(vector<int>&a,int l,int r)
{
	if(l>=r) return ;
	int k=l+rand()%(r-l+1);
	vector<int>m=quick_sort_partition3(a,l,r);
	randomized_quick_sort(a,l,m[0]-1);
	randomized_quick_sort(a,m[1]+1,r);
}
main()
{
   int i,j,n,m;
   cin>>n;
   vector<int>a(n);
   fi(i,n) cin>>a[i];
   randomized_quick_sort(a,0,a.size()-1);
   for(auto c:a) cout<<c<<gap;
   cout<<endl;
  }
