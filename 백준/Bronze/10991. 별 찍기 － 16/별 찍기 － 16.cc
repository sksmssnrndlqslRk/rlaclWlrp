#include <bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n+1;i++){
		if(i!=1){
			for(int j=i;j<n+1;j++){
			cout<<" ";
		}
		for(int j=0;j<i+i-1;j++){
			if(j%2!=0){
				cout<<"*";
			}
			else{
				if(j!=0){
					cout<<" ";
				}
				
			}
		}
		cout<<"\n";
		}
		
	}
	return 0;
}
