#include<bits/stdc++.h>
using namespace std;
int n, k, a[16], x[16];
void ql(int t, int s, int sum) {
    for(int i = s; i <= n; i++) {
        x[t] = a[i];
        if(sum + x[t] == k){
            cout << "[";
            for(int l = 1; l <= t; l++) {
                cout << x[l];
                if(l < t) cout << " ";
            }
            cout << "]\n";
        } else if(sum + x[t] < k) ql(t + 1, i + 1, sum + x[t]);
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