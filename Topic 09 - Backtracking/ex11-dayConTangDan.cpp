#include<bits/stdc++.h>
using namespace std;
int n, a[21], l[21];
void ql(int u, int bd) {
    for(int i = bd; i <= n; i++) {
        if(a[i] > l[u - 1]) {
            l[u] = a[i];
            if(u >= 2) {
                for(int j = 1; j <= u; j++) {
                    cout << l[j] << " ";
                }
                cout << endl;
            }
            ql(u + 1, i + 1);
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
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    l[0] = 0;
    ql(1, 1);
    return 0;
}