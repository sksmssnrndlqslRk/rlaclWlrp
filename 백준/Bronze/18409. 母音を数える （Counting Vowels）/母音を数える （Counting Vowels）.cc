#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    string str;
    string vowel="aeiouAEIOU";
    cin>>str;
    int ans=0;
    for(int i=0;i<n;i++){
        if(vowel.find(str[i])!=string::npos) ans++;
    }
    cout<<ans;
    return 0;
}