#include<bits/stdc++.h>
using namespace std;
int n, k, s, a[21], sum, cnt;
void ql(int t) {
    for(int i = a[t - 1] + 1; i <= n - k + t; i++) {
        a[t] = i;
        sum += a[t];
        if(t == k && sum == s) {
            cnt++;
        } else if(t < k) {
            ql(t + 1);
        }
        sum -= a[t];
    }
}
int main() {
    #ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    #endif
    cin >> n >> k >> s;
    ql(1);
    cout << cnt << endl;
    return 0;
}