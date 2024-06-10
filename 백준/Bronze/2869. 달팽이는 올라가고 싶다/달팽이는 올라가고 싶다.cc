#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a,b,v;
	int ans=0;
	cin>>a>>b>>v;
	ans=(v-b)/(a-b);
	if((v-b)%(a-b)!=0) ans++;
	cout<<ans;
	return 0;
}