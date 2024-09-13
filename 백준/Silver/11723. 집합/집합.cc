#include <bits/stdc++.h>
using namespace std;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int arr[21]={0,};
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        int t;
        
        if(str=="add"){
            cin>>t;
            if(arr[t]==0){
                arr[t]=1;
            }
            
        }
        else if(str=="remove"){
            cin>>t;
            if(arr[t]==1){
                arr[t]=0;
            }
            
        }
        else if(str=="check"){
            cin>>t;
            if(arr[t]==1){
                cout<<1<<"\n";
            }
            else{
                cout<<0<<"\n";
            }
        }
        else if(str=="toggle"){
            cin>>t;
            if(arr[t]==1){
                arr[t]=0;
            }
            else{
                arr[t]=1;
            }
        }
        else if(str=="all"){
            fill(arr+1, arr+21, 1);
        }
        else if(str=="empty"){
            fill(arr+1, arr+21, 0);
        }
    }
    return 0;
}