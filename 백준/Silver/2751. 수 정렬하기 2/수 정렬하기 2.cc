#include <bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	vector<int> vec;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		vec.push_back(a);
	}
	sort(vec.begin(),vec.end());
	for(int i=0;i<n;i++){
		cout<<vec[i]<<"\n";
	}
	
	return 0;
}