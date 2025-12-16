#include <bits/stdc++.h>
using namespace std;
void solve() {
    int N;
    if (!(cin >> N)) {
        return; 
    }
    for (int i = 1; i <= N; ++i) {
        if (N % i == 0) {
            cout << i << endl;
        }
    }
}
int main() {
    solve(); 
    return 0;
}
