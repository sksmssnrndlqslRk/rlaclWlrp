#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n,m;
    cin>>n>>m;
    vector<int> vec(n,0);
    vector<int> D(m,0);
    
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    for(int j=0;j<m;j++){
        int D;
        cin>>D;
        auto temp=lower_bound(vec.begin(),vec.end(),D);
        if(temp !=vec.end() && *temp == D){
            cout<<distance(vec.begin(),temp);
        }
        else{
            cout<<-1;
        }
        cout<<"\n";
    }
    
    
    return 0;
}