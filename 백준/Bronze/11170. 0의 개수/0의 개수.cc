#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    
    
    
    for(int i=0;i<t;i++){
        int n,m;
        int ans=0;
        cin>>n>>m;
        for(int i=n;i<=m;i++){
            string str=to_string(i);
            for(int j=0;j<str.size();j++){
                if(str[j]=='0')
                    ans++;
            }
        }
        cout<<ans<<"\n";
    }
    
    return 0;
}