#include<bits/stdc++.h>
using namespace std;
int n, s, t[31], a[31], ans = INT_MAX;
void ql(int i, int bd, int sum) {
    for(int j = bd; j < n; j++) {
        a[i] = t[j];
        if(sum + a[i] == s) {
            ans = min(ans, i);
        } else if(sum + a[i] < s) {
            ql(i + 1, j + 1, sum + a[i]);
        }
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
    cout << (ans == INT_MAX ? -1 : ans) << endl;
    return 0;
}