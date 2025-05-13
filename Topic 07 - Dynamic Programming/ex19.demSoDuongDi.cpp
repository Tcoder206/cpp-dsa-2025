#include<bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    #endif
    int n; cin >> n;
    char c[n + 1][n + 1];
    int dp[n + 1][n + 1] = {0};
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) cin >> c[i][j];
    }
    dp[0][1] = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++){
            if(c[i][j] == '.') dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            else dp[i][j] = 0;
        }
    }
    cout << dp[n][n] << endl;
    return 0;
}