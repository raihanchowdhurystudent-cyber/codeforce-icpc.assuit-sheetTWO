#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pll = pair<ll, ll>;

int A, B, len;
string S;
pll memo[5][37][2]; // [pos][sum][tight]

ll pow10[5] = {1, 10, 100, 1000, 10000};

pll dfs(int pos, int sum, int tight) {
    if (pos == len) {
        return (A <= sum && sum <= B) ? pll{1, 0} : pll{0, 0};
    }
    
    if (memo[pos][sum][tight] != pll{-1, -1}) {
        return memo[pos][sum][tight];
    }
    
    pll res = {0, 0};
    int up = tight ? S[pos] - '0' : 9;
    
    for (int d = 0; d <= up; ++d) {
        int new_sum = sum + d;
        if (new_sum > B) continue; // pruning
        int new_tight = tight && (d == up);
        auto [cnt, sm] = dfs(pos + 1, new_sum, new_tight);
        ll contrib = (ll)d * cnt * pow10[len - 1 - pos];
        res.first += cnt;
        res.second += sm + contrib;
    }
    
    return memo[pos][sum][tight] = res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N >> A >> B;
    
    S = to_string(N);
    len = S.size();
    
    // Initialize memo
    for (auto& row : memo)
        for (auto& col : row)
            for (auto& cell : col)
                cell = {-1, -1};
    
    auto [_, answer] = dfs(0, 0, 1);
    cout << answer << '\n';
    
    return 0;
}
