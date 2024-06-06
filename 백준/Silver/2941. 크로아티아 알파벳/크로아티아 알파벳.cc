#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int ans = 0;

    for(int i = 0; i < s.size(); i++){
        if (s[i] == 'c' && i + 1 < s.size()) {
            if (s[i + 1] == '=' || s[i + 1] == '-') {
                ans++;
                i++;
            } else {
                ans++;
            }
        }
        else if (s[i] == 'd' && i + 1 < s.size()) {
            if (s[i + 1] == 'z' && i + 2 < s.size() && s[i + 2] == '=') {
                ans++;
                i += 2;
            } else if (s[i + 1] == '-') {
                ans++;
                i++;
            } else {
                ans++;
            }
        }
        else if ((s[i] == 'l' || s[i] == 'n') && i + 1 < s.size() && s[i + 1] == 'j') {
            ans++;
            i++;
        }
        else if ((s[i] == 's' || s[i] == 'z') && i + 1 < s.size() && s[i + 1] == '=') {
            ans++;
            i++;
        }
        else {
            ans++;
        }
    }

    cout << ans;
    return 0;
}
