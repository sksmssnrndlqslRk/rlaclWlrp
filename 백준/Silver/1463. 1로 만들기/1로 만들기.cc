#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> vec(n+1,0);
    int ans=0;
    vec[0]=0;
    vec[1]=0;
    vec[2]=1;
    for(int i=3;i<=n;i++){
        vec[i]=vec[i-1]+1;
        if(i%2==0){
            vec[i]=min(vec[i],vec[i/2]+1);
        }
        if(i%3==0){
            vec[i]=min(vec[i],vec[i/3]+1);
        }
    }
    cout<<vec[n];
        
    
    return 0;
}