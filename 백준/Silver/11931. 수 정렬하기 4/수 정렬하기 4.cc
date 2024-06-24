#include <bits/stdc++.h>
using namespace std;

bool temp(int a, int b){
    return a>b;
}

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
    sort(vec.begin(),vec.end(),temp);
    for(int i=0;i<n;i++){
        cout<<vec[i]<<"\n";
    }
    return 0;
}