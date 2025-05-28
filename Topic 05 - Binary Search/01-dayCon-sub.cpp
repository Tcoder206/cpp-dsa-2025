#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n, x, arr[MAXN + 3], pf[MAXN + 3], ans = 0;
bool check(int len) {
    for(int i = len; i <= n; i++) {
        if(pf[i] - pf[i - len] >= x) return true;
    }
    return false;
}
int main() {
    #ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    #endif
    cin >> n >> x;
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        pf[i] = pf[i - 1] + arr[i];
    }
    int l = 1, r = n;
    while(l <= r) {
        int m = (l + r)/2;
        if(check(m)) {
            ans = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    cout << ans << endl;
    return 0;
}