#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    int n; cin >> n;
    int a[n], dp[n], res = 1;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        dp[i] = 1;
    }
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] < a[j]) {
                dp[j] = max(dp[j], dp[i] + 1);
            }
        }
    }
    for(int i = 0; i < n; i++) res = max(res, dp[i]);
    cout << n - res << endl;
    return 0;
}