#include<bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    #endif
    int t; cin >> t;
    while(t--) {
        int n, k, sum = 0, ind = 0;
        cin >> n >> k;
        int a[n];
        for(int &i : a) cin >> i;
        for(int i = 0; i < k; i++) sum += a[i];
        int res = sum;
        for(int i = k; i < n; i++) {
            sum = sum - a[i - k] + a[i];
            if(sum > res) {
                res = sum;
                ind = i - k + 1;
            }
        }
        cout << res << endl;
        for(int i = ind; i < ind + k; i++) {
            cout << a[i] << " ";
        }
    }
    return 0;
}