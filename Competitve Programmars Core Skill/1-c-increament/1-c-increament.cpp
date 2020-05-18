#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define ff first
#define ss second
main()
{
   int n,i,j,t,m,z,y,sum=0,p,k,idx;
  string x;
  cin>>x;
  int cnt=0;
  for(i=0;i<x.size();i++)
  {
  	if(x[i]=='9') cnt++;
  }
  if(cnt==x.length()) cout<<x.length()+1<<endl;
  else cout<<x.length()<<endl;
}

