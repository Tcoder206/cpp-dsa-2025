#include<bits/stdc++.h>
using namespace std;
int n, x, a[21], b[21], ans = -1;
void ql(int i, int bd, int sum) {
    for(int j = bd; j <= n; j++) {
        b[i] = a[j];
        if(a[j] + sum == x) {
            for(int k = 1; k <= i; k++) cout << b[k] << (k < i ? " " : "");
            cout << endl;
        } else if(a[j] + sum < x) ql(i + 1, j, a[j] + sum);
    }
}
int main() {
    #ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    #endif
    cin >> n >> x;
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    ql(1, 1, 0);
    return 0;
}