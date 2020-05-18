#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define ff first
#define ss second
int a[40000];
main()
{
   int n,i,j,t,y,p,k,x,z,idx;
   cin>>x>>y>>z;
   int flag=0;
   a[0]=0;
   for(i=1;i<3001;i++)
   {
   	a[2*i-1]=a[2*i-2]+x;
   	a[2*i]=a[2*i-1]-y;
   }
   for(i=0;i<3001;i++)
   {
   	if(a[i]==z)
	{
		flag=1;
		idx=i;
		break;
	}
   }
   if(flag)
   {
   	cout<<idx<<endl;
   }
   else cout<<"-1"<<endl;
}
