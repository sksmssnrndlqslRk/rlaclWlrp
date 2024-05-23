#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string a;
    while(1){
        getline(cin,a);
        if(a=="END") break;
        reverse(a.begin(),a.end());
        cout<<a<<"\n";
    }
    return 0;
}