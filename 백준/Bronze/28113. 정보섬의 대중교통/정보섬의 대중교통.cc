#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c;
    cin>>c>>a>>b;
    if(a<b) cout<<"Bus";
    else if(a>b) cout<<"Subway";
    else cout<<"Anything";
    
    return 0;
}