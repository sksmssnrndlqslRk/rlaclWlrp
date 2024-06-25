#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c;
    cin>>a>>b>>c;
    int t=60*a+b;
    t+=c;
    
    cout<<(t/60)%24<<" "<<t%60;
    return 0;
}