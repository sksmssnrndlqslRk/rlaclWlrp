#include <bits/stdc++.h>

using namespace std;

bool solution(vector<string> a) {
    bool answer = true;
    
    sort(a.begin(),a.end());
    
    for(int i=0;i<a.size()-1;i++){
        if(a[i]==a[i+1].substr(0,a[i].size())){
            answer=false;
            break;
        }
    }
    
    return answer;
}