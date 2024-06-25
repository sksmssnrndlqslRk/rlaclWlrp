#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    cin>>a>>b;
    vector<int> vec;
    for(int i=0;i<a;i++){
        int c;
        cin>>c;
        vec.push_back(c);
    }
    for(int i=0;i<b;i++){
        int c;
        cin>>c;
        vec.push_back(c);
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}