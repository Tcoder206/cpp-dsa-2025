#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    int n, x; cin >> n >> x;
    int c[n];
    vector<int> dp(x + 1, 0);
    dp[0] = 1;
    int MOD = 1e9 + 7;
    for(int i = 0; i < n; i++) cin >> c[i];
    for(int i = 0; i < n; i++) {
        for(int j = c[i]; j <= x; j++) {
            dp[j] = (dp[j] + dp[j - c[i]]) % MOD;
        }
    }
    cout << dp[x] << endl;
    return 0;
}