#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a;
    cin>>a;
    vector<int> vec(26,0);
    for(int i=0;i<a.size();i++){
        vec[a[i]-97]++;
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}