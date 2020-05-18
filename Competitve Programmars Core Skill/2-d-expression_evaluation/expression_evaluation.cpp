#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
   int i,j,n,val=0,sym=1;
   int ans=0;
   string x;
   cin>>x;
   for(i=0;i<x.length();i++)
   {
   	char ch=x[i];
   	if(ch=='+' || ch=='-')
	{
		  ans+=val*sym;
		  val=0;
		  if(ch=='+') sym=1;
		  else sym=-1;
	}
	else
	{
		val=val*10+(ch-48);
	}
   }
   ans+=val*sym;
   cout<<ans<<endl;
}



