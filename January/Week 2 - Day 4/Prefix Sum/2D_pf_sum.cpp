#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    int a[n][m], pf[n + 1][m + 1];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= m; j++) {
            if(i == 0 || j == 0) {
                pf[i][j] = 0;
            } else {
                pf[i][j] = pf[i - 1][j] + pf[i][j - 1] - pf[i - 1][j - 1] + a[i - 1][j - 1];
            }
        }
    }
    cout << "Prefix Sum:\n";
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= m; j++) {
            cout << pf[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Input Sum:\n";
    int h1, h2, c1, c2; cin >> h1 >> h2 >> c1 >> c2;
    int sum = pf[h2][c2] - pf[h2][c1 - 1] - pf[h1 - 1][c2] + pf[h1 - 1][c1 - 1];
    cout << sum << endl;
    return 0;
}