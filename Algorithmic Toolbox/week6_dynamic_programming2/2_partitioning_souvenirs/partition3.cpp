
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

bool subsetSum(int S[], int n, int a, int b, int c, auto &lookup)
{

    if (a == 0 && b == 0 && c == 0)
        return true;

    if (n < 0)
        return false;

    string key = to_string(a) + "|" + to_string(b) + "|" + to_string(c) + "|" + to_string(n);
   //  cout<<key<<endl;
    if (lookup.find(key) == lookup.end())
    {

        bool A = false;
        if (a - S[n] >= 0)
            A = subsetSum(S, n - 1, a - S[n], b, c, lookup);

        bool B = false;
        if (!A && (b - S[n] >= 0))
            B = subsetSum(S, n - 1, a, b - S[n], c, lookup);

        bool C = false;
        if ((!A && !B) && (c - S[n] >= 0))
            C = subsetSum(S, n - 1, a, b, c - S[n], lookup);

        lookup[key] = A || B || C;
      //  cout<<A<<gap<<B<<gap<<C<<gap<<1000<<endl;
    }
    return lookup[key];
}
 main()
{
    int n;
    cin>>n ;
    int S[n];
    for(int i=0;i<n;i++){
    	cin>>S[i];
    }
  if(n<3)
  {
  	cout<<0<<endl;
  	return 0;
  }
  unordered_map<string,bool>lookup;
  int sum=accumulate(S,S+n,0);
    if(sum%3==0 and subsetSum(S,n-1,sum/3,sum/3,sum/3,lookup))
        cout << "1";
    else
        cout << "0";
}
