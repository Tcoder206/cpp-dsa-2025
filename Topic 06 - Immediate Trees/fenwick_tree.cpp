#include<bits/stdc++.h>
using namespace std;
int n, bit[1000000], a[1000000];
void update(int pos, int val) {
    for(; pos <= n; pos += pos & -pos) {
        bit[pos] += val;
    }
}
int query(int pos) {
    int sum = 0;
    for(; pos >= 0; pos -= pos & -pos) {
        sum += bit[pos];
    }
    return sum;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    int m; cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        update(i, a[i]);
    }
    while(m--) {
        int q, x, y; cin >> q >> x >> y;
        if(q == 1) {
            update(x, y);
        } else {
            cout << query(y) - query(x - 1) << endl;
        }
    }
    return 0;
}