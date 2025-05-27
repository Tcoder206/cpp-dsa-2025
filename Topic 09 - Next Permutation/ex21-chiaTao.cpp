#include<bits/stdc++.h>
using namespace std;
int n, a[21], isFinal, ans, x[10001];
void sinh() {
    int i = n;
    while(i > 0 && x[i]) {
        x[i--] = 0;
    }
    if(i == 0) {
        isFinal = 1;
    } else {
        x[i] = 1;
    }
}
int main() {
    #ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    #endif
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    int ans = INT_MAX;
    while(!isFinal) {
        int sum0 = 0, sum1 = 0;
        for(int i = 1; i <= n; i++) {
            if(x[i]) sum1 += a[i];
            else sum0 += a[i];
        }
        ans = min(ans, abs(sum0 - sum1));
        sinh();
    }
    cout << ans << endl;
    return 0;
}