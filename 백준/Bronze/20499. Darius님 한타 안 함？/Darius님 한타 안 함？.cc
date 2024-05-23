#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int k,d,a;
    char q,p;
    cin>>k>>q>>d>>p>>a;
    if(k+a<d||d==0) cout<<"hasu";
    else cout<<"gosu";
    return 0;
}