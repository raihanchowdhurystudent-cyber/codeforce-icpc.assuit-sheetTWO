#include <bits/stdc++.h>
using namespace std;
bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    int limit = sqrt(num);
    for (int i = 2; i <= limit; ++i) {
        if (num % i == 0) {
            return false; 
        }
    }
    return true;
}
int main() {
    int N;
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        if (is_prime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
