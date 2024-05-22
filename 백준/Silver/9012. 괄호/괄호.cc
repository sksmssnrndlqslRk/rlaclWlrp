#include <bits/stdc++.h>
using namespace std;

int check(string str){
    stack<char> st;
    for(int i=0;i<str.length();i++){
        if(str[i]=='('){
            st.push('(');
        }
        else{
            if(st.empty()) return 0;
            st.pop();
        }
    }
    if(st.empty()) return 1;
    return 0;
    
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        if(check(str)) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
    return 0;
}