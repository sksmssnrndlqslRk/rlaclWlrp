#include <bits/stdc++.h>
using namespace std;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int man=a+b+c+d;
    cin>>a>>b>>c>>d;
    man=max(man,a+b+c+d);
    cout<<man;
    return 0;
}