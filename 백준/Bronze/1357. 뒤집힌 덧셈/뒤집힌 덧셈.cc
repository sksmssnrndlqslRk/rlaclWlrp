#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a,b;
    cin>>a>>b;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());

    string c=to_string(stoi(a)+stoi(b));
    reverse(c.begin(),c.end());
    cout<<stoi(c);
    return 0;
}
