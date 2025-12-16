#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int X;
    if (!(cin >> X)) return 0;
    if (X == 2) {
        cout << "YES\n";
        return 0;
    }
    if (X < 2 || X % 2 == 0) {
        cout << "NO\n";
        return 0;
    }
    for (int d = 3; d * d <= X; d += 2) {
        if (X % d == 0) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}
