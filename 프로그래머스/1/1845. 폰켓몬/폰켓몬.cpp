#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    
    unordered_map<int,int> chuu;
    
    for(int i=0;i<nums.size();i++){
        chuu[nums[i]]++;
    }
    
    if(chuu.size()>nums.size()/2){
        answer=nums.size()/2;
    }
    else answer=chuu.size();
    
    return answer;
}