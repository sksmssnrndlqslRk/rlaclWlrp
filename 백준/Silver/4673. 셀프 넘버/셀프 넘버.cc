#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    bool arr[10010]={false,};
    for(int i=1;i<10010;i++) {
        int number=i;
        int sum=number;
 
        while(number!= 0) {
            sum=sum+(number%10);
            number=number/10;
        }
        if(sum<10001) arr[sum]=true;
    }
    
    for (int i=1;i<10001;i++) {
		if (!arr[i]) {
			cout<<i<<"\n";
		}
	}
    return 0;
}