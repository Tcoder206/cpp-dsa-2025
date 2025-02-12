#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    int n; cin >> n;
    int f[n + 1];
    f[0] = 1;
    for(int i = 1; i <= n; i++) {
        f[i] = 0;
        for(int j = 1; j <= 3; j++) {
            if(i >= j) {
                f[i] += f[i - j];
            }
        }
    }
    cout << f[n] << endl;
    return 0;
}