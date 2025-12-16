#include <bits/stdc++.h>
using namespace std;
void solve() {
    int N;
    if (!(cin >> N)) return;
    long long max_number = 0;
    for (int i = 0; i < N; ++i) {
        long long X;
        if (!(cin >> X)) return; 
        if (X > max_number) {
            max_number = X; }}
    cout << max_number << endl;}
    
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
