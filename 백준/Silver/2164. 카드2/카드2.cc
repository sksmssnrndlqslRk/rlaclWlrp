#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    queue<int> que;
    for(int i=1;i<=n;i++){
        que.push(i);
    }
    while(1){
        if(que.size()==1) break;
        que.pop();
        int temp=que.front();
        que.pop();
        que.push(temp);
        
    }
    cout<<que.front();
    
    return 0;
}