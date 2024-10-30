#include <bits/stdc++.h>
using namespace std;
vector<int> vec;

bool b_s(int q){
    int a=0,b=vec.size()-1;
    while(1){
        if(a>b) break;
        int m=(a+b)/2;
        if(vec[m]<q){
            a=m+1;;
        }
        else if(vec[m]>q){
            b=m-1;
        }
        else{
            return 1;
        }
        
    }
    return 0;
    
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        vec.push_back(a);
    }
    sort(vec.begin(),vec.end());
    int b;
    cin>>b;
    for(int i=0;i<b;i++){
        int q;
        cin>>q;
        if(b_s(q)){
            cout<<1<<"\n";
        }
        else{
            cout<<0<<"\n";
        }
    }
    return 0;
}