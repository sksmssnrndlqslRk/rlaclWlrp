#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b,x;
        cin>>a>>b>>x;
        cout<<a*(x-1)+b<<"\n";
    }
    return 0;
}