#include <bits/stdc++.h>
using namespace std;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n=5;
    int man=-100;
    int ma;
    for(int i=0;i<5;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(man<a+b+c+d){
            man=a+b+c+d;
            ma=i+1;
        }
    }
    cout<<ma<<" "<<man;
    return 0;
}