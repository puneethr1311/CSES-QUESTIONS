#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    for (long long k = 1; k <= n; ++k) {
        long long cells = k * k;
        long long total_pairs = cells * (cells - 1) / 2;
        long long attacking = 0;
        if (k >= 3) attacking = 4 * (k - 1) * (k - 2);
        cout << (total_pairs - attacking) << '\n';
    }
    return 0;
}
