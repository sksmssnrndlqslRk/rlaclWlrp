#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        vector<int> vec;
        for(int j=0;j<10;j++){
            int a;
            cin>>a;
            vec.push_back(a);
        }
        sort(vec.begin(),vec.end());
        cout<<vec[7]<<"\n";
        
    }
    return 0;
}
