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
    sort(vec.begin(),vec.end());
    cout<<vec[n-k];
    return 0;
}
