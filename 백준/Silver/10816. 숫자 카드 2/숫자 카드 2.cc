#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n,m;
    cin>>n;
    unordered_map<int,int> chuu;
    
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        chuu[a]++;
    }
    cin>>m;
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        cout<<chuu[a]<<" ";
    }
    
    
    return 0;
}