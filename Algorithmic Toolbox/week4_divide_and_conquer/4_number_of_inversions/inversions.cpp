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
int get_inversions(vi &a, vi&b,int left, int ave, int right) {
    int i = left, j = ave, k = left;
   int inv_count = 0;
    while (i <= ave - 1 and j <= right) {
        if (a[i] <= a[j]) {
            b[k] = a[i];
            i++;
        } else {
            b[k] = a[j];
            inv_count += ave - i;
            j++;
        }
        k++;
    }
    while (i <= ave - 1) {
        b[k] = a[i];
        i++;
        k++;
    }
    while (j <= right) {
        b[k] = a[j];
        j++;
        k++;
    }
    for (i = left; i <= right; i++) {
        a[i] = b[i];
    }
//	fi(i,a.size()) cout<<a[i]<<gap;
  // cout<<endl;
    //cout<<left<<gap<<right<<gap<<inv_count<<endl;
    return inv_count;
}

int merge_sort(vi &a, vi &b, int left, int right) {
   int inv_count = 0;
    if (right <= left) return inv_count;
    int ave = left + (right - left) / 2;
    inv_count+=merge_sort(a, b, left, ave);
  //  cout<<inv_count<<gap<<left<<gap<<right<<gap<<1000<<endl;//Sort the first half and take the number of operations done
    inv_count+=merge_sort(a, b, ave + 1, right);
   //    cout<<inv_count<<gap<<left<<gap<<right<<gap<<2000<<endl; //Sort the second half and number of operaions is added

    inv_count += get_inversions(a, b, left, ave + 1, right);
     //   cout<<inv_count<<gap<<left<<gap<<right<<gap<<3000<<endl; //Sort  the first half and second half and number of operations is taken into account Like
//9 8 7 3 2 1 becomes 789 123 after first two operations and later the two half is fused together and that number of operations is added here

    return inv_count;
}

main() {
    int n,i;
     cin >> n;
    vector<int> a(n);
     fi(i,n) cin>>a[i];
    vi b(a.size());
    cout << merge_sort(a, b, 0, a.size() - 1) <<endl;
}
