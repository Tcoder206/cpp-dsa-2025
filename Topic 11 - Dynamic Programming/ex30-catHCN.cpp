#include<bits/stdc++.h>
using namespace std;
#define f1(i, n) for(int i = 1; i < (n); i++)
int main() {
    #ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    #endif
    int a, b; cin >> a >> b;
    vector<vector<int>> dp(a, vector<int>(b, 0));
    f1(i, a + 1) f1(j, b + 1) {
        if(i == j){
            dp[i][j] = 0;
        } else {
            f1(k, j) dp[i][j] = min(dp[i][j], dp[k][j] + dp[i - k][j] + 1);
            f1(k, i) dp[i][j] = min(dp[i][j], dp[i][k] + dp[i][j - k] + 1);
        }
    }
    cout << dp[a][b] << endl;
    return 0;
}