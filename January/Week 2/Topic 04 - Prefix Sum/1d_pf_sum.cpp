#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    int a[n + 1], pf[n + 1] = {0};
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) {
        pf[i] = a[i] + pf[i - 1];
    }
    int l, r; cin >> l >> r;
    int sum = pf[r] - pf[l - 1];
    cout << sum << endl;
    return 0;
}