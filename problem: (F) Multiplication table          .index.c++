#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    if (!(cin >> N)) return 0;               
    for (int i = 1; i <= 12; ++i) {
        cout << N << " * " << i << " = " << N * i << '\n';
    }
    return 0;
}
