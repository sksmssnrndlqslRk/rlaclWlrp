#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	vector<int> arr;
	for(int i=0;i<4;i++){
		int a;
		cin>>a;
		arr.push_back(a);
	}
	cout<<arr[0]*arr[1]+arr[2]*arr[3];
	return 0;
}