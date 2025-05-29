#include<bits/stdc++.h>
using namespace std;
int n, s, a[21], b[21], ok;
void ql(int u, int bd, int sum) {
    if(ok) return;
    for(int j = bd; j <= n; j++) {
        b[u] = a[j];
        if(b[u] + sum == s) ok = 1;
        else ql(u + 1, j + 1, sum + b[u]);
    }
}
int main() {
    #ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    #endif
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        s += a[i];
    }
    if(s % 2 == 1) {
        ok = 0;
    } else {
        s /= 2;
        ql(1, 1, 0);
    }
    cout << ok << endl;
    return 0;
}