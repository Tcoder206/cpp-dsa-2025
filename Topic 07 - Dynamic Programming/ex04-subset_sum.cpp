/*
8 92
69 16 82 170 31 24 45 112
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    int n, s; cin >> n >> s;
    int a[n], dp[n + 1][s + 1];
    memset(dp, 0, sizeof(dp));
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        dp[i][0] = 1;
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= s; j++) {
            dp[i][j] = dp[i - 1][j];
            if(a[i - 1] <= j) {
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - a[i - 1]];
            }
        }
    }
    cout << dp[n][s] << endl;
    return 0;
}