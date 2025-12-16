#include <iostream>
using namespace std;
void calculate_factorial() {
    int N;
    cin >> N;
    long long factorial = 1;
    for (int i = 1; i <= N; ++i)  {
        factorial = factorial * i;}
    cout << factorial << endl;}
void solve() {
    int T;
    if (!(cin >> T)) return;
    while (T--) {
        calculate_factorial(); }}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;}
