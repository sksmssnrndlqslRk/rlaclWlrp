#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int v;
    string str;
    cin>>v;
    cin>>str;
    int ans=0;
    for(int i=0;i<v;i++){
        if(str[i]=='A') ans+=1;
        else if(str[i]=='B') ans-=1;
    }
    if(ans==0) cout<<"Tie";
    else if(ans>0) cout<<"A";
    else cout<<"B";
    return 0;
}