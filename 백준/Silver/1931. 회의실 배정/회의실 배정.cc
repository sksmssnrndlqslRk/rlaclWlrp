#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    return a.second < b.second;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    
    vector<pair<int,int>> vec;
    
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        vec.push_back({a, b});
    }
    
    sort(vec.begin(), vec.end(),compare);
    int ans=0;
    int temp=0;
    for(int i=0;i<n;i++){
        if(temp<=vec[i].first){
            temp=vec[i].second;
            ans++;
        }
        
    }
    cout<<ans;
    
    return 0;
}