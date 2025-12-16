#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    for (int i = 1; i <= N; ++i) {
        // leading spaces
        for (int s = 0; s < N - i; ++s) {
            cout << ' ';
        }
        // asterisks
        for (int a = 0; a < 2 * i - 1; ++a) {
            cout << '*';
        }
        cout << '\n';
    }
    
    return 0;
}
