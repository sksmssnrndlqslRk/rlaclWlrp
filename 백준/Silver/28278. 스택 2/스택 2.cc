#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    stack<int> st;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a==1){
            int t;
            cin>>t;
            st.push(t);
        }
        else if(a==2){
            if(st.empty()){
                cout<<-1<<"\n";
            }
            else{
                cout<<st.top()<<"\n";
                st.pop();
            }
        }
        else if(a==3){
            cout<<st.size()<<"\n";
        }
        else if(a==4){
            cout<<st.empty()<<"\n";
        }
        else if(a==5){
            if(st.empty()){
                cout<<-1<<"\n";
            }
            else {
                cout<<st.top()<<"\n";
            }
        }
    }
    return 0;
}