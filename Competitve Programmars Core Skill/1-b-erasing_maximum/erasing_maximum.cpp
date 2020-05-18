#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define ff first
#define ss second
main()
{
   int n,i,j,t,m,z,y,sum=0,cnt=0,p,k,idx;
   cin>>n;
   int a[3000];
   int b[3000];
   for(i=1;i<=n;i++) cin>>a[i];
   int mx=-100;
   for(i=1;i<=n;i++)
   {
   	if(a[i]>=mx)
	{
		mx=a[i];
		b[mx]++;
	}
   }
   bool flag=1;
 //  cout<<b[mx]<<" "<<1000<<" "<<mx<<endl;
   for(i=1;i<=n;i++)
   {
   	  if(b[mx]<3)
	  {
	  	if(a[i]!=mx) cout<<a[i]<<" ";
	  }
	  else
	  {
	  	if(a[i]==mx && flag) cnt++;
	  	if(cnt==3)
		{
			cnt=0;
			flag=0;
			continue;
		}
		else cout<<a[i]<<" ";
	  }
   }
   cout<<endl;
}
