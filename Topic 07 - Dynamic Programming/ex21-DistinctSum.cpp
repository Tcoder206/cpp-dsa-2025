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
    int a[n], s = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
    }
    int dp[s + 1] = {0};
    dp[0] = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = s; j >= 1; j--) {
            if(a[i - 1] <= j)
                dp[j] = dp[j] || dp[j - a[i - 1]];
        }
    }
    for(int i = 0; i <= s; i++) {
        if(dp[i] == 1) cout << i << " ";
    }
    return 0;
}