#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	vector<int> vec(6,0);
	vector<int> temp={1,1,2,2,2,8};
	for(int i=0;i<6;i++){
		cin>>vec[i];
	}
	for(int i=0;i<6;i++){
		cout<<temp[i]-vec[i]<<" ";
	}
	return 0;
}