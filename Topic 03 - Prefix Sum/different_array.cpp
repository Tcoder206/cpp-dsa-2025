/*
8
3 8 1 4 7 2 9 5
2 4 3
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    int n; cin >> n;
    int pf[n + 1] = {0}, a[n + 1] = {0};
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        pf[i] = a[i] - a[i - 1];
    }
    int l, r, k; cin >> l >> r >> k;
    pf[l] += k;
    pf[r + 1] -= k;
    for(int i = 1; i <= n; i++) {
        pf[i] += pf[i - 1];
        cout << pf[i] << " ";
    }
    return 0;
}
