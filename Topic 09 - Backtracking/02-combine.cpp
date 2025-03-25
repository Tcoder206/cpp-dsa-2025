#include<bits/stdc++.h>
using namespace std;
int n, k, a[100001];
void result() {
    for(int i = 1; i <= k; i++) {
        cout << a[i];
    }
    cout << endl;
}
void Try(int x) {
    for(int i = a[x - 1] + 1; i <= n - k + x; i++) {
        a[x] = i;
        if(x == k) {
            result();
        } else {
            Try(x + 1);
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
    cin >> k >> n;
    Try(1);
    return 0;
}