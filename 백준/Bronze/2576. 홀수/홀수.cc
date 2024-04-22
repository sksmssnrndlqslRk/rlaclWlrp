#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int min=111;
	int ans=0;
	for(int i=0;i<7;i++){
		int n;
		cin>>n;
		if(n%2!=0){
			ans+=n;
			if(min>n){
				min=n;
			}
		}
	}
	if(min==111){
		cout<<-1;
		
	}
	else{
		cout<<ans<<"\n"<<min;
	}
	return 0;
}