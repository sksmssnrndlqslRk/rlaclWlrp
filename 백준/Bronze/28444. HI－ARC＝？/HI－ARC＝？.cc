#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> vec;
    
    for(int i=0;i<5;i++){
        int a;
        cin>>a;
        vec.push_back(a);
    }
    
    int ans1=vec[0]*vec[1];
    int ans2=vec[2]*vec[3]*vec[4];
    
    cout<<ans1-ans2;
    return 0;
}