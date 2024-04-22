#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	vector<int> vec(1000,0);
	for(int i=0;i<10;i++){
		int a;
		cin>>a;
		vec[a%42]+=1;
	}
	int ans=0;
	for(int i=0;i<1000;i++){
		if(vec[i]>0){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}