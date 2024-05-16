#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    unordered_set<string> str = {
        "Never gonna give you up",
        "Never gonna let you down",
        "Never gonna run around and desert you",
        "Never gonna make you cry",
        "Never gonna say goodbye",
        "Never gonna tell a lie and hurt you",
        "Never gonna stop"
    };

    int n;
    cin>>n;
    cin.ignore();

    string s;
    bool temp=false;

    while (n--) {
        getline(cin, s);
        if (str.find(s) ==str.end()) {
            temp=true;
            break;
        }
    }

    if (temp){
        cout<<"Yes";
    } 
    else{
        cout<<"No";
    }

    return 0;
}