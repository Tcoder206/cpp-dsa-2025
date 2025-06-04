#include<bits/stdc++.h>
using namespace std;
#define fp(i, a, b) for(int i = (a); i < (b); i++)
#define fm(i, a, b) for(int i = (a); i > (b); i--)
int main() {
    #ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    #endif
    int n; cin >> n;
    int a[n], res = 1, f[n + 1] = {0}, g[n + 1] = {0};
    f[0] = 1; g[n] = 1;
    fp(i, 1, n + 1) cin >> a[i];
    fp(i, 1, n + 1) {
        f[i] = (a[i - 1] < a[i]) ? f[i - 1] + 1 : 1;
        res = max(res, f[i]);
    }
    fm(i, n - 1, 0)
        g[i] = (a[i] < a[i + 1]) ? g[i + 1] + 1 : 1;
    fp(i, 2, n) res = max(res, f[i - 1] + g[i + 1]);
    cout << res << endl;
    return 0;
}