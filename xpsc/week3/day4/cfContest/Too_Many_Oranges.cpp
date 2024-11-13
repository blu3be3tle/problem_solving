#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
using namespace std;

bool solve(int n, int k) {
    int minSlice = n * 10;
    int maxSlice = n * 12;
    if (k < minSlice || k > maxSlice) return false;

    vector<bool> dp(k + 1, false);
    dp[0] = true;

    for (int i = 0; i < n; ++i) {
        vector<bool> newDp(k + 1, false);
        for (int j = 0; j <= k; ++j) {
            if (dp[j]) {
                if (j + 10 <= k) newDp[j + 10] = true;
                if (j + 11 <= k) newDp[j + 11] = true;
                if (j + 12 <= k) newDp[j + 12] = true;
            }
        }
        dp = newDp;
    }

    return dp[k];
}

int main() {
    fastIO;
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << (solve(n, k) ? "YES" : "NO") << endl;
    }
    return 0;
}
