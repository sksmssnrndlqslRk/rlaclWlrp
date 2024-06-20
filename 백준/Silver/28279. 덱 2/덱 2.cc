#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    deque<int> d;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a==1){
            int x;
            cin>>x;
            d.push_front(x);
        }
        else if(a==2){
            int x;
            cin>>x;
            d.push_back(x);
        }
        else if(a==3){
            if(d.empty()) cout<<"-1";
            else {
                cout<<d.front();
                d.pop_front();
            }
            cout<<"\n";
        }
        else if(a==4){
            if(d.empty()) cout<<"-1";
            else {
                cout<<d.back();
                d.pop_back();
            }
            cout<<"\n";
        }
        else if(a==5){
            cout<<d.size();
            cout<<"\n";
        }
        else if(a==6){
            cout<<d.empty();
        cout<<"\n";
            
        }
        else if(a==7){
            if(d.empty()) cout<<"-1";
            else {
                cout<<d.front();
            }
            cout<<"\n";
        }
        else if(a==8){
            if(d.empty()) cout<<"-1";
            else {
                cout<<d.back();
            }
            cout<<"\n";
        }
        
    }
    return 0;
}