#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int> vec(n+1,0);
    for(int i=0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        for(int j=a;j<=b;j++){
            vec[j]=c;
        }
    }
    for(int i=1;i<n+1;i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}