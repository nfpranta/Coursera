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
main()
{
  int i,j,n,m;
  cin>>n;
  int a[n+3];
  fi(i,n) cin>>a[i];
  int cnt=1;
  int mx=0;
  int ans=0;
  sort(a,a+n);
  for(i=1;i<n;i++)
  {
  	 if(a[mx]==a[i]) cnt++;
  	 else
	 {
	 	mx=i;
		cnt=1;
	 }
	 ans=max(ans,cnt);
  }
  if(ans>n/2) cout<<1<<endl;
  else cout<<0<<endl;
  }
