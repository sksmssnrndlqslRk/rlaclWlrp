#include <bits/stdc++.h>
using namespace std;

void print(){
    cout << " @@@   @@@ " << '\n';
	cout << "@   @ @   @" << '\n';
	cout << "@    @    @" << '\n';
	cout << "@         @" << '\n';
	cout << " @       @ " << '\n';
	cout << "  @     @  " << '\n';
	cout << "   @   @   " << '\n';
	cout << "    @ @    " << '\n';
	cout << "     @     " << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
	for(int i=0;i<n;i++){
		print();
	}
    return 0;
}
