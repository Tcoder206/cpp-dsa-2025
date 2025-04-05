#include<bits/stdc++.h>
using namespace std;
char a[1001][1001];
int n, m, xA, yA, dx[4] = {0, -1, 1, 0}, dy[4] = {-1, 0, 0, 1};
bool dfs(int i, int j) {
    cout << i << " " << j << endl;
    if(a[i][j] == 'B') return true;
    a[i][j] = 'x';
    for(int k = 0; k < 4; k++) {
        int di = dx[k] + i, dj = dy[k] + j;
        if(di >= 1 && di <= n && dj >= 1 && dj <= m && a[di][dj] == 'o') {
            if(dfs(di, dj)) return true;
        }
    }
    return false;
}
int main() {
    #ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    #endif
    cin >> n >> m >> xA >> yA;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; i++) cin >> a[i][j];
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; i++){
            if(a[i][j] == 'A') {
                xA = i, yA = j;
            }
        }
    }
    dfs(xA, yA);
    return 0;
}