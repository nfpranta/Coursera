#include<bits/stdc++.h>
using namespace std;
int ans[2000][2000];
int distance(string x,string y,int i,int j,int I,int D,int S)
{
	  int diff=0;
		if(i==0) //Deletion
		{
			ans[i][j]=j;
		}
		else if(j==0) //Insertion
		{
			ans[i][j]=i;
		}
		else
		{
			if(x[i-1]!=y[j-1]) //Check if substitution is required
			{
				diff=S;
			}
			else diff=0;
			ans[i][j]=min(distance(x,y,i-1,j,I,D,S)+D,min(distance(x,y,i,j-1,I,D,S)+I,distance(x,y,i-1,j-1,I,D,S)+diff));
		}
	return ans[i][j];
}
int main() {
    int n, m;
    cin >> n >> m;
    string u, w;
    cin >> u;
    cin >> w;
    int I, D, S;
    cin >> I >> D >> S;
    int result=distance(u,w,n,m,I,D,S);
    cout << result << endl;
    return 0;
}
