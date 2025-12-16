#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    for (int t = 0; t < T; ++t) {
        long long N;
        cin >> N;       
        if (N == 0) {
            cout << "0\n";
            continue;
        }        
        vector<int> digits;
        while (N > 0) {
            digits.push_back(N % 10);
            N /= 10;
        }       
        for (size_t i = 0; i < digits.size(); ++i) {
            if (i) cout << ' ';
            cout << digits[i];
        }
        cout << '\n';
    }    
    return 0;
}
