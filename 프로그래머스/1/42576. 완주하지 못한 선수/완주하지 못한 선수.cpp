#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> chuu;
    
    // 완주자의 이름을 카운팅
    for (int i = 0; i < completion.size(); i++) {
        chuu[completion[i]]++;
    }
    
    // 참가자의 이름에서 카운트를 줄임
    for (int i = 0; i < participant.size(); i++) {
        chuu[participant[i]]--;
        
        // 카운트가 음수가 되면 완주하지 못한 사람
        if (chuu[participant[i]] < 0) {
            return participant[i];
        }
    }
    
    return "";
}
