#include <bits/stdc++.h>
#define int long long int
using namespace std;
main() {

    int n;
    cin >> n;
    int mx=100007;
    int arr[mx];
    int range=-100007;
    memset(arr,0,sizeof(arr));
    while(n--){
        int l,r;
        cin>>l>>r;
        arr[l-1]++;
        arr[r]--;
       range=max(r,range);
    }
   // for(int i=0;i<=range;i++) cout<<arr[i]<<" ";
    //cout<<endl;
    for(int i=1;i<=range;i++){
        arr[i]+=arr[i-1];
    }
    for(int i=0;i<=range;i++){
        if(arr[i])cout<<i+1<<" "<< arr[i]<<endl;
    }
    return 0;
}
