#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
int main() {
    int n, totalWeight;
    cin >> n >> totalWeight;

    vector<pair<int,int>> items;
    for (int i = 0; i < n; ++i) {
        int weight, value;
        cin >> weight >> value;
        items.push_back({weight, value});
    }
    sort(items.begin(), items.end());
    reverse(items.begin(), items.end());
 //    for(int i=0;i<n;i++) cout<<items[i].first<<" "<<items[i].second<<endl;
   //  cout<<endl;
    int totalValue = 0;
    vector<int> candidates;

    for (int power = 0; power <= 30; ++power) {
        int weight = 1 << power;
        while (items.size() > 0 && items.back().ff == weight) {
            candidates.push_back(items.back().ss);
            items.pop_back();
        }

        sort(candidates.begin(), candidates.end());
		//for(int i=0;i<candidates.size();i++) cout<<candidates[i]<<" "<<1000;
        //cout<<endl;
        if (totalWeight & weight) {
            if (candidates.size() > 0) {
                totalValue += candidates.back();
               // cout<<totalValue<<endl;
                candidates.pop_back();
            }
        }
      //   cout<<candidates.size()<<" "<<weight<<" "<<endl;
        vector<int> newCandidates;
        while (candidates.size() >= 2) {
            int combinedValue = candidates.back();
            candidates.pop_back();
            combinedValue += candidates.back();
            candidates.pop_back();
            newCandidates.push_back(combinedValue);
        }

        if (candidates.size() >= 1) {
            newCandidates.push_back(candidates.back());
            candidates.pop_back();
        }

        candidates = newCandidates;
    }

    cout << totalValue << '\n';

    return 0;
}
