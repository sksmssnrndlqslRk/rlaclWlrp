#include <bits/stdc++.h>
using namespace std;
char str[1000][1000];

void temp(int n,int x, int y){
	if(n==1){
		str[x][y]='*';
		return;
	}
	int len=4*(n-1)+1;
	
	for(int i=0;i<len;i++){
		str[x][i+y]='*';
		str[x+len-1][i+y]='*';
		
		str[x+i][y]='*';
		str[x+i][y+len-1]='*';
		
	}
	
	temp(n-1,x+2,y+2);
	return;
}



int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	
	 for (int i=0;i<4*(n-1)+1;i++){
        for (int j=0;j<4*(n-1)+1;j++){
            str[i][j] = ' ';
        }
    }
	
	temp(n,0,0);
	
	for(int i=0;i<4*(n-1)+1;i++){
		for(int j=0;j<4*(n-1)+1;j++){
			cout<<str[i][j];
		}
		cout<<"\n"; 
	}
	
	return 0;
}
/*
4*n-4
4*(n-1)+1
1 1
2 5(+4)
3 9(+4)
4 13(+4)

*/