#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> vec(9,0);
    for(int i=0;i<9;i++){
        cin>>vec[i];
    }
    int sum;
    
    sort(vec.begin(),vec.end());
    for(int i=0;i<9;i++){
        for(int j=8;j>=0;j--){
            for(int k=8;k>=0;k--){
                if(j==k) break;
                sum = accumulate(vec.begin(), vec.end(), 0);
                sum-=vec[j]+vec[k];
                if(sum==100) {
                    for(int q=0;q<9;q++){
                        if(q!=k&&q!=j){
                        
                            cout<<vec[q]<<"\n";
                        }
                    }
                    return 0;
                }
            }
        }
    }
    
    
    
    return 0;
}
