// I couldn’t find a suitable definition for Pisano period so that I could make a
// naive algorithm. Well, it turns out, I was looking at the wrong place. The whole
// time, it was right in front of my eyes but I couldn’t see it. So, without further
// ado, here’s the definition. This was a very tricky one. I had to search a lot and
// read quite a few posts in the Course forum to understand the algorithm.
//
// The algorithm to compute the get_fibonacci_huge was given in the What To Do section.
// “Therefore, to compute, say, F(2015) mod 3 we just need to find the remainder of
// 2015 when divided by 8. Since 2015 = 251·8+7, we conclude that F(2015) mod 3 = F 7 mod 3 = 1.”
//  We just have to generalize it.
//
// First we need to find the remainder of F(n) divided by the length of Paisano
// period given m. To find the length of Paisano period for m, simply find the
// remainder of F(0) mod m to F(m*m) mod m and stop as soon as you encounter 01,
// as they indicate that the next iteration is being started, and return the length
// up to that point.
//
// Now, you only need to find the F(remainder), which is going to be a lot less than F(n) and simply return it.
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
int get_pisano_period(int m) {
    int a = 0, b = 1, c = a + b;
    for (int i = 0; i < m * m; i++) {
        c = (a + b) % m;
        a = b;
        b = c;
        if (a == 0 && b == 1) return i + 1;
    }
}
int f[mex];
main()
{
 int n,m,i,j;
 int k;
 cin>>n>>m;
 int pisanoperiod=get_pisano_period(m);
 n=n%pisanoperiod;
 int a=0,b=1,c=a+b;
 f[0]=0;
 f[1]=1;
 for(i=2;i<=n;i++)
 {
 	f[i]=(f[i-1]+f[i-2])%m;
 }
 cout<<f[n]%m<<endl;
}
