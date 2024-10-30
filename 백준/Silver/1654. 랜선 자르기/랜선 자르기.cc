#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int k,n;
    cin>>k>>n;
    unsigned int m=0;
    vector<unsigned int> vec;
    for(int i=0;i<k;i++){
        unsigned int a;
        cin>>a;
        vec.push_back(a);
        m=max(m,a);
    }
    
    unsigned int a=1;
    unsigned int b=m;
    unsigned int ans=0;
    while(1){
        if(a>b) break;
        unsigned int t=(a+b)/2;
        
        unsigned int x=0;
        for(unsigned int i=0;i<k;i++){
            x+=vec[i]/t;
        }
        
        if(x>=n){
            ans = t;
            a=t+1;
        }
        else if(x<n){
            b=t-1;
        }
        
    }
    cout<<ans;
    return 0;
}