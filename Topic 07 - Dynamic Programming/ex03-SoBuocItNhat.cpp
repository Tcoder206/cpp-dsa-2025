/*
13
143 340 571 845 211 228 274 443 666 594 491 814 24
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    int n, res = 0;
    cin >> n;
    int a[n], dp[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        dp[i] = 1;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            if(a[j] < a[i]) dp[i] = max(dp[i], dp[j] + 1);
        }
        res = max(res, dp[i]);
    }
    cout << n - res << endl;
    return 0;
}