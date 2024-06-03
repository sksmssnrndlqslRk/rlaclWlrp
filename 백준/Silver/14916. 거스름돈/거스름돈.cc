#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int ans=0;
    cin>>n;
    while(1){
        if(n%5==0){
            ans+=n/5;
            break;
        }
        else if(n-2>=0){
            n-=2;
            ans++;
        }
        else {
            ans=-1;
            break;
        }

    }
    if(n<0){
        ans=-1;
    }
    cout<<ans;
    return 0;
}
/*



*/