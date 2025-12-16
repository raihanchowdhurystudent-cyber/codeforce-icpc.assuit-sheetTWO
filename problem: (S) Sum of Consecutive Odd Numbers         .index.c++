#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        
        int L = min(X, Y);
        int R = max(X, Y);
        
        // smallest odd > L
        int first = (L % 2 == 0) ? L + 1 : L + 2;
        // largest odd < R
        int last  = (R % 2 == 0) ? R - 1 : R - 2;
        
        if (first > last) {
            cout << "0\n";
            continue;
        }
        
        long long count = ((last - first) / 2LL) + 1;
        long long m = (first + 1LL) / 2;
        long long total = (m + count - 1) * (m + count - 1) - (m - 1) * (m - 1);
        
        cout << total << '\n';
    }
    
    return 0;
}
