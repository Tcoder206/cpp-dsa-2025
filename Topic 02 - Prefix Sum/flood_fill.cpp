/*
5 3
1 1 2
1 1 1
1 1 2
2 2 1
2 1 2
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
    int n, m; cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) cin >> a[i][j];
    }
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            bool check = true;
            for(int k = 0; k < 8; k++) {
                int di = dx[k] + i;
                int dj = dy[k] + j;
                if(di >= 0 && di < n && dj >= 0 && dj < m) {
                    if(a[di][dj] >= a[i][j]) {
                        check = false;
                        break;
                    }
                }
            }
            if(check) cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
