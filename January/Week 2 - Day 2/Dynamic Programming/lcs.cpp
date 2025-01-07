#include<bits/stdc++.h>
using namespace std;
int main() {
    string a, b; cin >> a >> b;
    int n = a.size(), m = b.size();
    int dp[n + 1][m + 1];
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= m; j++) {
            dp[i][0] = dp[0][j] = 0;
            if(i != 0 || j != 0) {
                if(a[i - 1] == b[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
                }
            }
        }
    }
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= m; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << dp[m][n] << endl;
    return 0;
}