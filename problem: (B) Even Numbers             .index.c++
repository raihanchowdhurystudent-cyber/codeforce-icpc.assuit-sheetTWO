#include <bits/stdc++.h>
using namespace std;
void solve() {
    long long N; 
       cin >> N; 
if (N < 2) {
       cout << -1 << endl;    return; }
for (long long i = 2; i <= N; i += 2) { 
       cout << i << endl;           } }
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
