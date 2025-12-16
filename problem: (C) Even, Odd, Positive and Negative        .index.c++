#include <bits/stdc++.h>
using namespace std;
void solve() {
    int N;
    cin >> N;
    int even_count = 0;
    int odd_count = 0;
    int positive_count = 0;
    int negative_count = 0;
    for (int i = 0; i < N; ++i) {
        int X;
        cin >> X; 
        if (X % 2 == 0) {
            even_count++;        } else {
            odd_count++;
        }
        if (X > 0) {
            positive_count++;        } else if (X < 0) {
            negative_count++;
        }
    }
    cout << "Even: " << even_count << endl;
    cout << "Odd: " << odd_count << endl;
    cout << "Positive: " << positive_count << endl;
    cout << "Negative: " << negative_count << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
