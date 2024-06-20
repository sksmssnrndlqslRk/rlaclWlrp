#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    queue<int> d;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        if(a=="push"){
            int x;
            cin>>x;
            d.push(x);
        }
        else if(a=="pop"){
            if(d.empty()) cout<<"-1";
            else {
                cout<<d.front();
                d.pop();
            }
            cout<<"\n";
        }
        else if(a=="size"){
            cout<<d.size();
            cout<<"\n";
        }
        else if(a=="empty"){
            cout<<d.empty();
        cout<<"\n";
            
        }
        else if(a=="front"){
            if(d.empty()) cout<<"-1";
            else {
                cout<<d.front();
            }
            cout<<"\n";
        }
        else if(a=="back"){
            if(d.empty()) cout<<"-1";
            else {
                cout<<d.back();
            }
            cout<<"\n";
        }
        
    }
    return 0;
}