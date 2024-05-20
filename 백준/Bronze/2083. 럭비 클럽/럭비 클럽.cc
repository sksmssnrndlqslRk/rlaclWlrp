#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        string str;
        int a,b;
        cin>>str>>a>>b;
        if(str=="#") break;
        cout<<str<<" ";
        if(a>17||80<=b) cout<<"Senior";
        else cout<<"Junior";
        cout<<"\n";
    }
    return 0;
}