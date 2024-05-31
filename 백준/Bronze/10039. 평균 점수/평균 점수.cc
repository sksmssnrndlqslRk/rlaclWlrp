#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> vec;
    for(int i=0;i<5;i++){
        int a;
        cin>>a;
        if(a<40){
            a=40;
        }
        vec.push_back(a);
    }
    cout<<accumulate(vec.begin(),vec.end(),0)/5;
    return 0;
}