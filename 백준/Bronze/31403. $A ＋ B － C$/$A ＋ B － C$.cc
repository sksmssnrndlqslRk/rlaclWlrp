#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c;
    cin>>a>>b>>c;
    cout<<a+b-c<<"\n";
    string q;
    q+=to_string(a);
    q+=to_string(b);
    cout<<stoi(q)-c;
    return 0;
}