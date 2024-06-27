#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    int c,d;
    cin>>a>>b>>c>>d; //  a/b  c/d
    int i=a*d+c*b;
    int j=b*d;
    int gcdd=gcd(i,j);
    cout<<i/gcdd<<" "<<j/gcdd;
    return 0;
}