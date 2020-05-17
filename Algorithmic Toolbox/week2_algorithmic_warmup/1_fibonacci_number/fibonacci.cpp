#include<bits/stdc++.h>
using namespace std;
#define int long long int
int ready[100];
int value[100];
int fibo(int n)
{
  if(n==0 || n==1) {
         return n;
  }
   else {
        if(ready[n]) return value[n];
        value[n]=fibo(n-1)+fibo(n-2);
          ready[n]=1;
          return value[n];
   }
}
main()
{
   int n;
   cin>>n;
cout<<fibo(n)<<endl;
}
