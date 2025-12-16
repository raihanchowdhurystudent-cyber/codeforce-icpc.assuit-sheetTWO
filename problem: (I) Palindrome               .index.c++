#include <bits/stdc++.h>
using namespace std;
int main() {
    long long N; 
    cin >> N; 
    long long original_N = N;
    long long reversed_N = 0;
    while (N > 0) {
        int last_digit = N % 10;
        reversed_N = reversed_N * 10 + last_digit;
        N = N / 10;
    }
    cout << reversed_N << endl;
    if (original_N == reversed_N) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
