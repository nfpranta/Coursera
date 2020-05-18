#include<bits/stdc++.h>
using namespace std;
#define int long long
main()
{
	int x,y;
	cin>>x>>y;
	int s=x*y;
	int d=x/y;
	if(x%y==0 || x*y<0) ;
	 else d+=1;
	cout<<d<<endl;
}
