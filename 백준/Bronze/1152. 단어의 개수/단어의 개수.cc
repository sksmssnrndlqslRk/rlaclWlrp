#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	getline(cin,str);
	int ans=0;
	if(str.size()==0){
		cout<<"0";
		return 0;
	}
	for(int i=0;i<str.size();i++){
		if(str[i]==' '){
			ans++;
		}
	}
	if(str[0]==' '){
		ans--;
	}
	if(str[str.size()-1]==' '){
		ans--;
	}
	
	cout<<ans+1;
	return 0;
}