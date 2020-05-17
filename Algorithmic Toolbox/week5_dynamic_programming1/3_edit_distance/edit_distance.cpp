
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
main()
{
        char s[3000],t[3000];
        scanf("%s",s);
        scanf("%s",t);
        int sizes = strlen(s),sizet = strlen(t);
        vector<int> v1(sizet+9),v2(sizet+9);
        for(int i=0;i<=sizet;i++)
            v1[i] = i;
        for(int i=0;i<sizes;i++)
        {
            v2[0] = i+1;
            for(int j=0;j<sizet;j++)
            {
                int add;
                if(s[i] == t[j])
                    add = 0;
                else
                    add = 1;
                v2[j+1] = min(v2[j]+1,min(v1[j+1]+1,v1[j]+add));
            }
            for(int i=0;i<=sizet;i++)
                v1[i] = v2[i];
        }
        printf("%d\n",v2[sizet]);
    return 0;
}
