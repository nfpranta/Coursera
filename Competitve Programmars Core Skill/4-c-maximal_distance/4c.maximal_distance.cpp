#include<bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
	int i,t,j,n,mn=INT_MAX,mx=INT_MIN,lft=1,rgt=1,x;
	cin>>t;
     for(i=0;i<t;i++)
	 {
	 	cin>>x;
        if(x<=mn)
		{
			lft=i+1;
			mn=x;
		}
		 if(x>=mx)
		{
			rgt=i+1;
			mx=x;
		}
		cout<<rgt<<" "<<lft<<endl;
	 }
}
