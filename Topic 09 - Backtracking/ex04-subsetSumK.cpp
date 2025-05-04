#include<bits/stdc++.h>
using namespace std;
int n, k, a[16], x[16];
void ql(int i, int bd, int sum) {
    for(int j = bd; j <= n; j++) {
        x[i] = a[j];
        if(sum + x[i] == k) {
            for(int t = 1; t <= i; t++) {
                cout << x[t];
                if(t < i) cout << " ";
            }
            cout << endl;
        } else if(sum + x[i] < k) {
            ql(i + 1, j + 1, sum + x[i]);
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
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    ql(1, 1, 0);
    return 0;
}