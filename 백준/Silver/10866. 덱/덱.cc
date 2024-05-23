#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    deque<int> q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        if(str=="push_front"){
            int a;
            cin>>a;
            q.push_front(a);
        }
        else if(str=="push_back"){
            int a;
            cin>>a;
            q.push_back(a);
        }
        else if(str=="pop_front") {
            if(q.empty()) cout<<-1;
            else{
                cout<<q.front();
                q.pop_front();
            }
            cout<<"\n";
        }
        else if(str=="pop_back") {
            if(q.empty()) cout<<-1;
            else{
                cout<<q.back();
                q.pop_back();
            }
            cout<<"\n";
        }
        else if(str=="size") {
            cout<<q.size();
            cout<<"\n";
        }
        else if(str=="empty"){
            if(q.empty()) cout<<1;
            else cout<<0;
            cout<<"\n";
        }
        else if(str=="front"){
            if(q.empty()) cout<<-1;
            else cout<<q.front();
            cout<<"\n";
        }
        else if(str=="back"){
            if(q.empty()) cout<<-1;
            else cout<<q.back();
            cout<<"\n";
        }
        
    }
    return 0;
}