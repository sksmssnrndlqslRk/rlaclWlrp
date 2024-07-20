#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> vec(8,0);
    vec.push_back(0);
    for(int i=0;i<8;i++){
        cin>>vec[i];
    }
    vector<int> vec1;
    vec1=vec;
    sort(vec.begin(),vec.end(),greater<int>());
    cout<<vec[4]+vec[3]+vec[2]+vec[1]+vec[0]<<"\n";
    vector<int> ans;
    for(int i=0;i<5;i++){
        ans.push_back(find(vec1.begin(),vec1.end(),vec[i])-vec1.begin());
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]+1<<" ";
    }
    return 0;
}