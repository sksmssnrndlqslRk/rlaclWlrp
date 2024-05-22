#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<vector<int>> vec;

int abcdef(int a,int b,int c, int d){
    int answer=0;
    
    for(int i=a;i<=c;i++){
        for(int j=b;j<=d;j++){
            answer+=vec[i][j];
        }
    }
    
    return answer;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>n>>m;
    vec.assign(n, vector<int>(m, 0));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
            
        }
    }
    int k;
    cin>>k;
    int x1,y1,x2,y2;
    for(int i=0;i<k;i++){
        cin>>x1>>y1>>x2>>y2;
        cout<<abcdef(x1-1,y1-1,x2-1,y2-1)<<"\n";
    }
    return 0;
}