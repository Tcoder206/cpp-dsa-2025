#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    int n; cin >> n;
    int a[n] = {0}, pf[n + 1] = {0};
    memset(pf, 0, sizeof(pf));
    for(int i = 1; i <= n; i++) {
        cin >> a[i - 1];
        pf[i] = pf[i - 1] + a[i - 1];
    }
    int l, r; cin >> l >> r;
    cout << (pf[r] - pf[l - 1]) << endl;
    return 0;
}
