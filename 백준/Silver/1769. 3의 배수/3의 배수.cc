#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int ans=0;
    while(s.size()>1){ 
        int sum=0;
        for(int i=0;i<s.size();i++){
            sum+=s[i]-'0';
        }
        s=to_string(sum);
        ans++;
    }

    cout<<ans<<"\n";
    if(stoi(s)%3==0)
        cout<<"YES";
    else
        cout<<"NO";
    
    return 0;
}