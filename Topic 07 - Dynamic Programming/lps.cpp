#include<bits/stdc++.h>
using namespace std;
int main() {
    string a; cin >> a;
    int n = a.size(), dp[n + 1][n + 1];
    memset(dp, 0, sizeof(dp));
    for(int i = 1; i <= n; i++) dp[i][i] = 1;
    int ans = 1;
    for(int len = 2; len < n; len++){
        for(int i = 1; i <= n - len + 1; i++) {
            int j = i + len - 1;
            if(len == 2 && a[i] == a[j]) dp[i][j] = 1;
            else dp[i][j] = (a[i] == a[j]) && dp[i + 1][j - 1];
            if(dp[i][j]) ans = max(ans, len);
        }
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << ans << endl;
    return 0;
}