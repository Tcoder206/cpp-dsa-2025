#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int f[n + 1], g[n + 1];
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] < a[j]) {
                f[i] = max(f[i], f[j] + 1);
            }
        }
    }
    for(int i = n - 1; i >= 0; i--) {
        for(int j = n - 1; j > i; j--) {
            if(a[i] > a[j]) {
                g[i] = max(g[i], g[j] + 1);
            }
        }
    }
    int res = 1;
    for(int i = 0; i < n; i++) {
        res = max(res, f[i] + g[i] - a[i]);
    }
    cout << res << endl;
    return 0;
}