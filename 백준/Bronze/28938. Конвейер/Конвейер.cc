#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int a=0;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        a+=q;
    }
    if(a==0){
        cout<<"Stay";
    }
    else if(a>0){
        cout<<"Right";
    }
    else {
        cout<<"Left";
    }
    return 0;
}