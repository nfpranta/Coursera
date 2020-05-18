#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
   int n;
   	int i,j,sum=0;
   	cin>>n;
   	int a[n+1];
   	for(i=0;i<n;i++) cin>>a[i];
   	for(i=0;i<n;i++)
	{
		int mn=a[i];
		sum+=a[i];
		for(j=i+1;j<n;j++)
		{
			//cout<<sum<<" "<<1000<<endl;
			if(mn>a[j]) mn=a[j];
			sum+=mn;
		}
	}
	cout<<sum<<endl;
}



