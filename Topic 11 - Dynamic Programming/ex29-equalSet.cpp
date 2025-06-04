#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int main() {
    #ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    #endif
    int n; cin >> n; int sum = n * (n + 1) / 2;
    vector<int> dp(sum + 1, 0);
    if(sum % 2 == 0) {
        sum /= 2; dp[0] = 1;
        for(int i = 1; i <= n; i++) for(int j = sum; j > 0; j--) {
            if(j >= i) dp[j] += dp[j - i];
            dp[j] %= MOD;
        }
        cout << dp[sum] / 2 << endl;
    } else cout << 0 << endl;
    return 0;
}