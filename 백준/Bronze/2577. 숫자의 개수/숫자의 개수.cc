#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a,b,c;
	cin>>a>>b>>c;
	int d;
	vector<int> vec(10,0);
	d=a*b*c;
	while(d>0){
		vec[d%10]++;
		d/=10;
	}
	for(int i=0;i<10;i++){
		cout<<vec[i]<<"\n";
	}
	return 0;
}