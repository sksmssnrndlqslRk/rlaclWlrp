#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    queue<int> q;
    for(int i=0;i<n;i++){
        q.push(i+1);
    }
    cout<<"<";
    
    while(q.size()!=0){
        for(int i=0;i<k-1;i++){
            q.push(q.front());
            q.pop();
        }
        cout<<q.front();
        if(q.size()!=1){
            cout<<", ";
        }
        q.pop();
    }
    cout<<">";
    return 0;
}