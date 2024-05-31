#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> vec;
    int a;
    for(int i=0;i<3;i++){
        cin>>a;
        vec.push_back(a);
    }
    sort(vec.begin(),vec.end());
    cout<<vec[1];
    return 0;
}