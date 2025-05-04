#include<bits/stdc++.h>
using namespace std;
int n, k, s, a[21], cnt;
void ql(int i, int bd, int sum) {
    for(int j = bd; j <= n; j++) {
        a[i] = j;
        if(i == k && sum + a[i] == s) {
            cnt++;
        } else if(i < k) {
            ql(i + 1, j + 1, sum + a[i]);
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
    cin >> n >> k >> s;
    ql(1, 1, 0);
    cout << cnt << endl;
    return 0;
}