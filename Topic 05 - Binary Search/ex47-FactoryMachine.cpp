#include<bits/stdc++.h>
using namespace std;
#define f0(i, n) for(int i = 0; i < (n); i++)
int check(int a[], int n, int t, int m) {
    int cnt = 0;
    f0(i, n) {
        cnt += (m / a[i]);
        if(cnt >= t) return true;
    }
    return false
}
int main() {
    #ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    #endif
    int n, t, ans = 0; cin >> n >> t;
    int a[n], min_t = INT_MAX;
    f0(i, n) {
        cin >> a[i];
        min_t = min(min_t, a[i]);
    }
    int l = 0, r = t * min_t;
    while(l <= r) {
        int m = (l + r)/2;
        if(check(a, n, t, m)) {
            ans = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    return 0;
}