#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    stack<int> stk;
    for(int i=0;i<n;i++){
        int a;
        string b;
        cin>>b;
        if(b=="push"){
            cin>>a;
            stk.push(a);
        }
        else if(b=="pop"){
            if(stk.empty()) cout<<-1;
            else {
                cout<<stk.top();
                stk.pop();
            }
            cout<<"\n";
            
        }
        else if(b=="size"){
            cout<<stk.size();
            cout<<"\n";
        }
        else if(b=="empty"){
            cout<<stk.empty();
            cout<<"\n";
        }
        else if(b=="top"){
            if(stk.empty()) cout<<-1;
            else cout<<stk.top();
            cout<<"\n";
        }
        
    }
    return 0;
}