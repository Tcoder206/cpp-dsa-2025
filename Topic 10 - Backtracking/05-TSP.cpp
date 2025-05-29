#include<bits/stdc++.h>
using namespace std;
int n, m, c[101][101], a[101], visited[101], d = 0, ans = INT_MAX, cmin = INT_MAX;
void TSP(int x) {
    for(int i = 1; i <= n; i++) {
        if(!visited[i]) {
            visited[i] = 1;
            a[x] = i;
            d += c[a[x - 1]][a[x]];
            if(x == n) {
                ans = min(ans, d + c[a[x - 1]][1]);
            } else if(d + (n - i + 1) * cmin < ans) {
                TSP(x + 1);
            }
            visited[i] = 0;
        }
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
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> c[i][j];
            if(c[i][j] != 0) {
                cmin = min(cmin, c[i][j]);
            }
        }
    }
    memset(visited, 0, sizeof(visited));
    TSP(1);
    for(int i = 1; i <= n; i++) {
        cout << ans << endl;
    }
    return 0;
}