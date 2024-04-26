#include <bits/stdc++.h>
using namespace std;
string big_num_sum(string num1, string num2) {
    string result;
    
    if (num1.size()<num2.size()) {
        string temp;
        temp=num1;
        num1=num2;
        num2=num1;
    }
    
    int size_min=num1.size()-num2.size();
    for (int i=0;i<size_min;i++) {
        num2.insert(0,"0");
    }
    
    int carry=0;
    for (int i = num1.size() - 1; i >= 0; i--) {
    	if((num1[i]-'0')+(num2[i]-'0')+ carry>=10){
    		result.push_back((num1[i]-'0')+(num2[i]-'0')+ carry-10 + '0');
    		carry=1;
		}
		else{
			result.push_back((num1[i]-'0')+(num2[i]-'0')+ carry+ '0');
			carry=0;
		}
    }
    
    if(carry) {
        result.push_back(carry+'0');
    }
    
    reverse(result.begin(), result.end());
    return result;
}


int main(){
	
	int n;
	cin>>n;

	string fibo[10001];
	fibo[0]='0';
	fibo[1]='1';
	for(int i=2;i<=n;i++){
		fibo[i]=big_num_sum(fibo[i-1],fibo[i-2]);
	}
	cout<<fibo[n];
	return 0;
}