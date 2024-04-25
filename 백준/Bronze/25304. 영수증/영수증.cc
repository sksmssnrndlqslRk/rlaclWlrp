#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	int a;
	cin>>n>>a;
	for(int i=0;i<a;i++){
		int b,d;
		cin>>b>>d;
		n-=b*d;
	}
	
	if(n==0){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	return 0;
}