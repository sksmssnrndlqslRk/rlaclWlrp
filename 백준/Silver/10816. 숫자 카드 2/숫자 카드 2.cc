#include <bits/stdc++.h>
using namespace std;
vector<int> vec1;
int lb(int n){
    int a=0,b=vec1.size();
    while (a<b) {
        int mid=(a+b)/2;
        if (vec1[mid]<n) {
            a=mid+1;
        } 
        else {
            b=mid;
        }
    }
    return a;
}

int ub(int n) {
    int a=0,b=vec1.size();
    while (a<b) {
        int mid=(a+b)/2;
        if (vec1[mid]<=n) {
            a = mid+1;
        } 
        else{
            b=mid;
        }
    }
    return a;
}

int ho(int n){
    return ub(n)-lb(n);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n,m;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        vec1.push_back(q);
    }
    sort(vec1.begin(),vec1.end());
    cin>>m;
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        cout<<ho(a)<<" ";
    }
    return 0;
}