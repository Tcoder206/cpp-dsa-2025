/*
3 9
2 3 5
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    int n, x; cin >> n >> x;
    int c[n], dp[n + 1][x + 1];
    memset(dp, 0, sizeof(dp));
    for(int i = 0; i < n; i++) {
        dp[i][0] = 1;
        cin >> c[i];
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= x; j++) {
            dp[i][j] = dp[i - 1][j];
            if(c[i - 1] <= j) dp[i][j] += dp[i][j - c[i - 1]];
        }
    }
    cout << dp[n][x] << endl;
    return 0;
}