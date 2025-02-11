#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    int n, m; cin >> n >> m;
    int dp[n + 1][m + 1];
    int w[n], v[n];
    for(int &i : w) cin >> i;
    for(int &i : v) cin >> i;
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= m; j++) {
            if(i == 0 || j == 0) {
                dp[i][j] = 0;
            } else {
                dp[i][j] = dp[i - 1][j];
                if(j >= w[i - 1]) {
                    dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i - 1]] + v[i - 1]);
                }
            }
        }
    }
    cout << dp[n][m] << endl;
    return 0;
}