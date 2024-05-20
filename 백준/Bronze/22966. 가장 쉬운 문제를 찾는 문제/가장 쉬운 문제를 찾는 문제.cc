#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a;
    
    int n;
    cin>>n;
    int mix=1e9;
    string m;
    for(int i=0;i<n;i++){
        string s;
        int a;
        cin>>s>>a;
        if(mix>a){
            mix=a;
            m=s;
        }
    }
    cout<<m;
    return 0;
}