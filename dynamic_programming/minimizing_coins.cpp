#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int INF = 1e9; // large value
vector<int> dp;

int solve(int sum, vector<int>& coins) {
    if (sum == 0) return 0;     // 0 coins for sum 0
    if (sum < 0) return INF;    // impossible
    if (dp[sum] != -1) return dp[sum];

    int best = INF;
    for (int c : coins) {
        best = min(best, 1 + solve(sum - c, coins));
    }
    return dp[sum] = best;
}

int main() {
    int n, sum;
    cin >> n >> sum;
    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    dp.assign(sum + 1, -1);

    int ans = solve(sum, coins);
    if (ans >= INF) cout << -1;   // not possible
    else cout << ans;             // minimum coins

    return 0;
}
