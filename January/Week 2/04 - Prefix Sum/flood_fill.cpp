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
    int n, m; cin >> n >> m;
    int a[n][m];
    const int q = 8;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) cin >> a[i][j];
    }
    int dx[q] = {-1, 0, 1, -1, 1, -1, 0, 1};
    int dy[q] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            bool check = true;
            for(int k = 0; k < q; k++){
                int x = i + dx[k], y = j + dy[k];
                if(x >= 0 && x < n && y >= 0 && y < m) {
                    if(a[x][y] >= a[i][j]) {
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