#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    vector<string> vec;
    vector<string> vec1; 
    cin>>a>>b;
    for(int i=0;i<a;i++){
        string str;
        cin>>str;
        vec.push_back(str);
    }
    for(int i=0;i<b;i++){
        string str;
        cin>>str;
        vec1.push_back(str);
    }
    vector<string> ans;
    sort(vec.begin(),vec.end());
    
    for(int i=0;i<vec1.size();i++){
        if(binary_search(vec.begin(),vec.end(),vec1[i])){
            ans.push_back(vec1[i]);
        }
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<"\n";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<"\n";
    }
    return 0;
}