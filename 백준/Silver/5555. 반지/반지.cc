#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string str;
    cin>>str;
    cin>>n;
    int ans=0;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        a+=a;
        if(a.find(str)!=string::npos){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}