#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.first == b.first) {
        return a.second < b.second;
    }
    return a.first < b.first;
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    
    cin>>n>>k;
    vector<pair<int,int>> vec;
    vector<int> ba;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        vec.push_back({a,b});
    }
    
    for(int j=0;j<k;j++){
        int a;
        cin>>a;
        ba.push_back(a);
    }
    
    sort(vec.begin(), vec.end(),compare);
    sort(ba.begin(),ba.end());
    
    long long ans=0;
    priority_queue<int> pq;
    int mi=0;
    
    for(int i=0;i<k;i++){
        for(int j=mi;j<n;j++){
            
            if(vec[j].first<=ba[i]){
                pq.push(vec[j].second);
                mi++;
            }
            else {
                break;
            }
            
            
            
        }
        if(!pq.empty()){
                ans+=pq.top();
                pq.pop();
            }
    }
    cout<<ans;
    return 0;
}