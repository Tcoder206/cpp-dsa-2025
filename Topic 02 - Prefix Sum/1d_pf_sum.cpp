#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    int n; cin >> n;
    int a[n];
    for(int &i : a) cin >> i;
    int pf[n + 1];
    memset(pf, 0, sizeof(pf));
    for(int i = 1; i <= n; i++) {
        pf[i] = pf[i - 1] + a[i - 1];
    }
    int l, r; cin >> l >> r;
    cout << pf[r] - pf[l - 1] << endl;
    return 0;
}
