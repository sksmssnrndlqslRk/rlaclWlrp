#include <bits/stdc++.h>
using namespace std;
char temp[1000][1000];

void str(int n,int x,int y){
	if(n==1){
		temp[x][y]='*';
		return;
	}
	
	int len=4*(n-1)+1;
	
	for(int i=0;i<len;i++){
		temp[x][i+y]='*';
		temp[x+len-1][i+y]='*';
		temp[x+i][y]='*';
		temp[x+i][y+len-1]='*';
	}
	
	
	str(n-1,x+2,y+2);
	return;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<4*(n-1)+1;i++){
		for(int j=0;j<4*(n-1)+1;j++){
			temp[i][j]=' ';
		}
	}
	
	str(n,0,0);
	
	for(int i=0;i<4*(n-1)+1;i++){
		for(int j=0;j<4*(n-1)+1;j++){
			cout<<temp[i][j];
		}
		cout<<"\n";
	}
	
	return 0;
}

/*

4*(n-1)+1
*/