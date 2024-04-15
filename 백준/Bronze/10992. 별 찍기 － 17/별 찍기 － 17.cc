#include <bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i!=n){
			for(int j=i;j<n;j++){
			cout<<" ";
		}
		for(int j=0;j<i;j++){
			if(j==0){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		for(int j=0;j<i-1;j++){
			if(j==i-1-1){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		}
		else{
			for(int j=0;j<i+i-1;j++){
				cout<<"*";
			}
		}
		
		cout<<"\n";
	}
	return 0;
}
