#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t,s;
	cin>>t>>s;
	if(s==1&&(t<12&&t>16)) cout<<280;
	else if(s==0&&(12<=t&&t<=16)) cout<<320;
	else cout<<280;
	return 0;
}