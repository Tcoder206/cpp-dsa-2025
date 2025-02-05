#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    int n, m; cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) cin >> a[i][j];
    }
    int pf[n + 1][m + 1];
    memset(pf, 0, sizeof(pf));
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            pf[i][j] = pf[i - 1][j] + pf[i][j - 1] + a[i - 1][j - 1] - pf[i - 1][j - 1];
        }
    }
    int c1, c2, h1, h2;
    cin >> c1 >> c2 >> h1 >> h2;
    cout << pf[c2][h2] - (pf[c1 - 1][h2] + pf[c2][h1 - 1] - pf[c1 - 1][h1 - 1]) << endl;
    return 0;
}
