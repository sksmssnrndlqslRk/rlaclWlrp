#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s="aeiou";
    string a;
    cin>>a;
    int ans=0;
    for(int i=0;i<a.size();i++){
        if(s.find(a[i])!=string::npos){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}