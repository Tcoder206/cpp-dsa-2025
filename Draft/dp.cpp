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
    int s = 0;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        s += a[i];
    }
    int dp[s + 1];
    dp[0] = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = s; j >= 1; j--) {
            if(j >= a[i]) {
                dp[j] |= dp[j - a[i]];
            }
        }
    }
    for(int i = 0; i <= s; i++) {
        if(dp[i]) cout << i << " ";
    }
    return 0;
}