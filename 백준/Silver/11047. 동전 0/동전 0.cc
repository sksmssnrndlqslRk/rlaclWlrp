#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        vec.push_back(a);
    }
    int ans=0;

    for(int i=vec.size()-1;i>=0;i--){
        ans+=k/vec[i];
        k=k%vec[i];
    }
    cout<<ans;
    return 0;
}