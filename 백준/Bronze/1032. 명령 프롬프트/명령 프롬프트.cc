#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool aa=false;
    for(int i=0;i<a[0].size();i++){
        for(int j=0;j<n;j++){
            if(a[0][i]!=a[j][i]){
                cout<<"?";
                aa=true;
                break;
            }
        }
        if(aa==false){
            cout<<a[0][i];
        }
        aa=false;
    }
    
    
    return 0;
}