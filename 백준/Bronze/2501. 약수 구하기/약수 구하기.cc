#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int> vec;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            vec.push_back(i);
        }
    }
    if(vec.size()<m) cout<<0;
    else{
    cout<<vec[m-1];
    }
    return 0;
}