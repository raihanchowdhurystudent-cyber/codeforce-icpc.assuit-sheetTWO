#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    for (int row = N; row >= 1; --row) {
        for (int i = 0; i < row; ++i) {
            cout << '*';
        }
        cout << '\n';
    }
    
    return 0;
}
