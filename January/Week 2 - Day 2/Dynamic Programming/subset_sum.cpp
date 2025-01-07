#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k, a[100]; cin >> n >> k;
    vector<int> dp(k + 1, 0);
    for(int i = 0; i < n; i++) cin >> a[i];
    dp[0] = 1;
    for(int i = 0; i < n; i++) {
        for(int j = k; j >= a[i]; j--) {
            if(dp[j - a[i]]) dp[j] = 1;
        }
    }
    for(auto i : dp) cout << i << " ";
    return 0;
}