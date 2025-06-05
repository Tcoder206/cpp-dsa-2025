#include<bits/stdc++.h>
using namespace std;
#define f0(i, n) for(int i = 0; i < (n); i++)
int check(int a[], int n, int h, int m) {
    int ans = 0;
    f0(i, n) ans += (a[i] % 3 == 0 ? a[i] / m : a[i] / m + 1);
    return ans <= h;
}
int main() {
    #ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    #endif
    int n, h, ans = -1; cin >> n >> h;
    int k[n]; f0(i, n) cin >> k[i];
    int l = 0, r = *max_element(k, k + n);
    while(l <= r) {
        int m = (l + r)/2;
        if(check(k, n, h, m)) {
            ans = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    cout << ans << endl;
    return 0;
}