#include<bits/stdc++.h>
using namespace std;
const int imax = INT_MAX - 1;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    int n, x; cin >> n >> x;
    int c[n];
    vector<int> dp(x + 1, imax);
    dp[0] = 0;
    for(int i = 0; i < n; i++) cin >> c[i];
    for(int i = 0; i < n; i++) {
        for(int j = c[i]; j <= x; j++) {
            dp[j] = min(dp[j], dp[j - c[i]] + 1);
        }
    }
    cout << (dp[x] == imax ? -1 : dp[x]) << endl;
    return 0;
}