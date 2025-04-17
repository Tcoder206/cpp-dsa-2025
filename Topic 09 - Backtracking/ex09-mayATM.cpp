#include<bits/stdc++.h>
using namespace std;
int n, s, t[31], a[31], ans = INT_MAX;
void ql(int u, int bd, int sum) {
    for(int i = bd; i <= n; i++) {
        if(sum + a[i] <= s) {
            a[u] = t[i];
            if(sum + a[i] == s) ans = min(ans, u);
            else ql(u + 1, i + 1, sum + a[i]);
        } else return;
    }
}
int main() {
    #ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    #endif
    cin >> n >> s;
    for(int i = 1; i <= n; i++) cin >> t[i];
    sort(t + 1, t + n + 1);
    ql(1, 1, 0);
    if(ans == INT_MAX) cout << - 1;
    else cout << ans << endl;
    return 0;
}