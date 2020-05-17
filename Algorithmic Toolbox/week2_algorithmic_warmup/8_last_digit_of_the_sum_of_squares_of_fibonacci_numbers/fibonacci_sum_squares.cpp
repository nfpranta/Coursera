#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define INF 1e9+100
#define pair<int,int> pii
#define ff first
#define ss second
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define FOR(i,n) for(i=0;i<n;i++)
#define REP(i,n) for(i=1;i<=n;i++)
#define pb push_back
#define mex 20000000
int get_pisano_period( ) {
    int a = 0, b = 1, c = a + b;
    for (int i = 0; i <10*10; i++) {
        c = (a + b) % 10;
        a = b;
        b = c;
        if (a == 0 && b == 1) return i + 1;
    }
}
int f[mex];
// Sum Of (Fib[0]^2+Fib[1]^2+.....+Fib[n]^2) = Fib[n]*Fib[n+1]
main()
{
 int n,m,i,j;
 int k;
 cin>>n;
 int pisanoperiod=get_pisano_period();
 n=(n)%pisanoperiod;
 int sum=0;
 f[0]=0;
 f[1]=1;
 for(i=2;i<=n+1;i++)
 {
 	f[i]=(f[i-1]+f[i-2])%10;
 	//sum+=f[i];
 }
 cout<<(f[n]*f[n+1])%10<<endl;
}
