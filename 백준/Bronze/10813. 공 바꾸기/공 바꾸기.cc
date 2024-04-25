#include <bits/stdc++.h>
#define SWAP(a, b, type) do { type TEMP = a; a = b; b = TEMP; } while (0)
using namespace std;


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	vector<int> vec;
	for(int i=0;i<n;i++){
		vec.push_back(i);
	}
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		SWAP(vec[a-1],vec[b-1],int);
	}
	for(int i=0;i<n;i++){
		cout<<vec[i]+1<<" ";
	}
	return 0;
}