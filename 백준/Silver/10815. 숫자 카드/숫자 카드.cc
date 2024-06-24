#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> vec1;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        vec1.push_back(a);
    }

    sort(vec1.begin(), vec1.end());

    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        int a;
        cin >> a;
        cout << binary_search(vec1.begin(), vec1.end(), a) << " ";
    }
    return 0;
}
