#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	vector<int> arr;
	for(int i=0;i<3;i++){
		int a;
		cin>>a;
		arr.push_back(a);
	}
	sort(arr.begin(),arr.end());
	cout<<arr[1];
	return 0;
}