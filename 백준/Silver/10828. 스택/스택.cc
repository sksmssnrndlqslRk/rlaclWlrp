#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int a;
        string b;
        cin>>b;
        if(b=="push"){
            cin>>a;
            vec.push_back(a);
        }
        else if(b=="pop"){
            if(vec.empty()) cout<<-1;
            else {
                cout<<vec.back();
                vec.pop_back();
            }
            cout<<"\n";
            
        }
        else if(b=="size"){
            cout<<vec.size();
            cout<<"\n";
        }
        else if(b=="empty"){
            cout<<vec.empty();
            cout<<"\n";
        }
        else if(b=="top"){
            if(vec.empty()) cout<<-1;
            else cout<<vec.back();
            cout<<"\n";
        }
        
    }
    return 0;
}