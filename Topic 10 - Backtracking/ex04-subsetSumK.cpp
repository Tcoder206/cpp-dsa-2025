#include<bits/stdc++.h>
using namespace std;
int n, m, a[15], x[15];
void ql(int i, int bd, int sum) {
    for(int j = bd; j <= n; j++) {
        x[i] = a[j];
        if(sum + a[j] == m) {
            for(int k = 1; k <= i; k++) cout << x[k] << (k < i ? " " : "");
            cout << endl;
        } else if(sum + a[j] < m) ql(i + 1, j + 1, a[j] + sum);
    }
}
int main() {
    #ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    #endif
    cin >> n >> m;
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    ql(1, 1, 0);
    return 0;
}