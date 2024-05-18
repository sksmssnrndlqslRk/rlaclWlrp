#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string str="AEIOUaeiou";
    string s;
    while(1){
        getline(cin, s);
        int ans=0;
        if(s=="#") break;
        for(int i=0;i<s.size();i++){
            if(str.find(s[i])!=string::npos) ans++;
        }
        cout<<ans<<"\n";
        ans=0;
    }
    
    
    return 0;
}