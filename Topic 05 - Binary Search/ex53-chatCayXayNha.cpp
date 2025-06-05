#include<bits/stdc++.h>
using namespace std;
#define f0(i, n) for(int i = 0; i < (n); i++)
int check(int a[], int n, int l, int m) {
    int cnt = 0;
    f0(i, n) {
        if(a[i] > m) cnt += (a[i] - m);
        if(cnt >= l) return true;
    }
    return false;
}
int main() {
    #ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    #endif
    int n, l; cin >> n >> l;
    int h[n]; f0(i, n) cin >> h[i];
    int L = 0, R = *max_element(h, h + n), ans = 0;
    while(L <= R) {
        int M = (L + R)/2;
        if(check(h, n, l, M)) {
            ans = M;
            R = M - 1;
        } else {
            L = M + 1;
        }
    }
    return 0;
}