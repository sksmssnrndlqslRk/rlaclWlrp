#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c;
    cin>>a>>b>>c;
    int n,m;
    cin>>n>>m;
    cout<<min(a,min(b,c))+min(n,m)-50;
    return 0;
}