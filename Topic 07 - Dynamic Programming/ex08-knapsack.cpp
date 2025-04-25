#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    int n, m; cin >> n >> m;
    int dp[n + 1][m + 1], w[n], v[n];
    memset(dp, 0, sizeof(dp));
    for(int &t : w) cin >> t;
    for(int &t : v) cin >> t;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            dp[i][j] = dp[i - 1][j];
            if(w[i - 1] <= j) {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i - 1]] + v[i - 1]);
            }
        }
    }
    cout << dp[n][m] << endl;
    return 0;
}