#include<bits/stdc++.h>
using namespace std;
int n, a[100001];
void result() {
    for(int i = 1; i <= n; i++) {
        cout << a[i];
    }
    cout << endl;
}
void Try(int x) {
    for(int i = 0; i <= 1; i++) {
        a[x] = i;
        if(x == n) {
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
    cin >> n;
    Try(1);
    return 0;
}