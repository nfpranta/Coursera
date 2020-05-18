#include<bits/stdc++.h>
using namespace std;
int ans[3000];
int n;
int a[3000];
void dp()
{
	int k,j;
	for(k=0;k<n;k++)
	{
			ans[k]=1;
			for(j=0;j<k;j++)
			{
				if(a[j]<a[k] and ans[k]<ans[j]+1)
				{
					ans[k]=ans[j]+1;
					//cout<<ans[k]<<" ";
				}
			}
					}
	}
int main() {
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
		dp();
        sort(ans,ans+n);
    cout << ans[n-1]<< endl;

    return 0;
}
