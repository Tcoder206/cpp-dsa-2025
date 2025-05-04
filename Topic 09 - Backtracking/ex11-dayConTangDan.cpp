#include<bits/stdc++.h>
using namespace std;
int n, a[21], l[21];
void ql(int i, int bd) {
    for(int j = bd; j <= n; j++) {
        if(l[i - 1] < a[j]) {
            l[i] = a[j];
            if(i >= 2) {
                for(int k = 1; k <= i; k++) {
                    cout << l[k] << (k == i ? "" : " ");
                }
                cout << endl;
            }
            ql(i + 1, j + 1);
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