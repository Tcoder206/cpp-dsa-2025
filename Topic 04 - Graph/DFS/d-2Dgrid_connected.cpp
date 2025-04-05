#include<bits/stdc++.h>
using namespace std;
char a[1001][1001];
int n, m;
int dx[4] = {0, -1, 1, 0};
int dy[4] = {-1, 0, 0, 1};
void dfs(int i, int j) {
    cout << i << " " << j;
    a[i][j] = 'o';
    for(int k = 0; k < 4; k++) {
        int di = dx[k] + i, dj = dy[k] + j;
        if(di >= 0 && di < n && dj >= 0 && dj < m && a[di][dj] == 'x') {
            dfs(di, dj);
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
        for(int j = 1; j <= m; j++) cin >> a[i][j];
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(a[i][j] == 'x') {
                dfs(i, j);
                cnt++;
            }
        }
    }
    return 0;
}