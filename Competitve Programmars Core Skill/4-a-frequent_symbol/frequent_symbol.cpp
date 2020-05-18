#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main() {
    string s;
    cin >> s;
    int q;
    cin >> q;
    vector<int> l(q), r(q);
    for (int i = 0; i < q; ++i)
        cin >> l[i] >> r[i];

    vector<char> result;
     int res=0;
      for(int i=0;i<q;i++)
	  {
		int m[29];
		memset(m,0,sizeof(m));
		for(int j=l[i];j<=r[i];j++)
		{
				m[s[j-1]-'a']++;
			}
				int mx=-1;
				char c;
				for(int ch=0;ch<26;ch++)
				{
					if(m[ch]>=mx) {
							mx=m[ch];
							c=ch+'a';
					}
				}
				result.pb(c);
	  	}
    for (int i = 0; i < q; ++i) {
        cout << result[i] << endl;
    }
    return 0;
}
