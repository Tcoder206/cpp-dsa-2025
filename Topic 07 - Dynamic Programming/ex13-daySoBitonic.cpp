#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    int n; cin >> n;
    int a[n + 1], res = 0, f[n + 1] = {0}, g[n + 1] = {0};
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) {
        f[i] = a[i];
        for(int j = 1; j <= i; j++) {
            if(a[j] < a[i]) f[i] = max(f[i], f[j] + a[i]);
        }
    }
    for(int i = n; i > 0; i++) {
        g[i] = a[i];
        for(int j = n; j > i; j--) {
            if(a[j] < a[i]) g[i] = max(g[i], g[j] + a[i]);
        }
    }
    for(int i = 1; i <= n; i++) {
        res = max(res, f[i] + g[i] - a[i]);
    }
    cout << res << endl;
    return 0;
}