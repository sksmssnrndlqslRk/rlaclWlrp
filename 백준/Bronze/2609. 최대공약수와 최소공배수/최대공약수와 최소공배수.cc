#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a,b;
	cin>>a>>b;
	int an=0;
	int ans=1;
	an=gcd(a,b);
	ans=a*b/an;
	cout<<an<<"\n"<<ans;
	return 0;
}