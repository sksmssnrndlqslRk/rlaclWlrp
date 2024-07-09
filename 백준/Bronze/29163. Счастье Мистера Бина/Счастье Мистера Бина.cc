#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int ans=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a%2==0){
            ans++;
        }
        else{
            ans--;
        }
    }
    if(0<ans){
        cout<<"Happy\n";
    }
    else {
        cout<<"Sad\n";
    }
    return 0;
}