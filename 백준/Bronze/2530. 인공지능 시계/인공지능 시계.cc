#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int A, B, C;
    cin >> A >> B >> C;
    
    int D;
    cin>>D;
    
    int totalSeconds = C + D;
    int seconds = totalSeconds % 60;
    int totalMinutes = B + (totalSeconds / 60);
    int minutes = totalMinutes % 60;
    int totalHours = A + (totalMinutes / 60);
    int hours = totalHours % 24;
    
    cout << hours << " " << minutes << " " << seconds << endl;
    return 0;
}