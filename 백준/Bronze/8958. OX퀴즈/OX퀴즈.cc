#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	int temp=1;
	int ans=0;
	for(int i=0;i<n;i++){
		string str;
		cin>>str;
		for(int j=0;j<str.size();j++){
			if(str[j]=='O'){
				//0cout<<"********\n"<<temp<<"*********\n";
				ans+=temp++;
			
			}
			else{
				temp=1;
			}
		}
		cout<<ans<<"\n";
		ans=0;
		temp=1;
	}
	
	return 0;
}