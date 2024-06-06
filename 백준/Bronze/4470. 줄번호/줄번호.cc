#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int n;
    cin >> n;
    cin.ignore();  // 남은 줄바꿈 문자를 무시한다.

    for(int i = 0; i < n; i++){
        getline(cin, s);
        cout << i + 1 << ". " << s << "\n";
    }
    
    return 0;
}
