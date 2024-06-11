#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        vec.push_back(a);
    }
    sort(vec.begin(),vec.end());
    cout<<vec[0]<<" ";
    for(int i=1;i<n;i++){
        if(vec[i]==vec[i-1]){
            continue;
        }
        else{
            cout<<vec[i]<<" ";
        }
    }
    return 0;
}