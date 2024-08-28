#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    stack<int> st;
    st.push(0);
    stack<int> temp;
    while(n--){
        int a;
        cin>>a;
        
        if(st.top()+1==a){
            st.push(a);
        }
        else {
            temp.push(a);
        }
        
        while(1){
            if(!temp.empty()){
                if(temp.top()==st.top()+1){
                    st.push(temp.top());
                    temp.pop();
                }
                else{
                    break;
                }
            
            }
            else{
                break;
            }
        }
        
        
    }
    if(temp.empty()){
        cout<<"Nice";
    }
    else cout<<"Sad";
    
    return 0;
}
