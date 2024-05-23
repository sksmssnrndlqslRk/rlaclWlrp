#include <iostream>
using namespace std;

int main(void) {
    int sum = 0;
    for (int i = 0; i < 6; i++) {
        int tmp;
        cin >> tmp;
        sum += tmp;
    }
    cout << sum*5;
    return 0;
}