#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,j,k;
	cin>>n;
	double a[10000],b[10000];
	for(i=0;i<n;i++) cin>>a[i];
	for(i=0;i<n;i++) cin>>b[i];
	double sa=0,sb=0;
	sa=accumulate(a,a+n,0.0);
	sb=accumulate(b,b+n,0.0);
	double eps=(double)n/200000;
	if(abs(sa-sb)<eps) cout<<"SUM(A)=SUM(B)"<<endl;
	else if(sa>sb+eps) cout<<"SUM(A)>SUM(B)"<<endl;
	else cout<<"SUM(A)<SUM(B)"<<endl;
}
