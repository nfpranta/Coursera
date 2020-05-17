
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
/*#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>*/

main()
{
    int d,m,n,i;
    cin>>d>>m>>n;
    vector<int>s(n+2);
    s[0]=0;
    for(i=1;i<=n;i++)
    {
        cin>>s[i];
    }
    s[n+1]=d;
    int temp=m;
    int  res=0,curpos=0;
    for(i=0;i<n+1;i++)
    {
        if(s[i+1]-s[i]<=m)
        {
            m-=(s[i+1]-s[i]);
            curpos=s[i+1];
        }
        else
        {
            if(s[i+1]-curpos>temp)
            {
                res=-1;
                break;
            }
            else
            {
                m=temp;
                res++;
                i--;
            }
        }
    }
    cout<<res;
}
