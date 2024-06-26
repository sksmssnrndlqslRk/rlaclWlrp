#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<long long> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    sort(A.begin(), A.end());

    for (int i = 0; i < m; ++i) {
        int type;
        long long k, j;
        cin >> type;
        
        if (type == 1) {
            cin >> k;
            auto it = lower_bound(A.begin(), A.end(), k);
            cout << A.end() - it << "\n";
        } else if (type == 2) {
            cin >> k;
            auto it = upper_bound(A.begin(), A.end(), k);
            cout << A.end() - it << "\n";
        } else if (type == 3) {
            cin >> k >> j;
            auto low = lower_bound(A.begin(), A.end(), k);
            auto high = upper_bound(A.begin(), A.end(), j);
            cout << high - low << "\n";
        }
    }

    return 0;
}
