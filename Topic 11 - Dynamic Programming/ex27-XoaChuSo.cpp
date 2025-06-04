#include<bits/stdc++.h>
using namespace std;
vector<int> f;
int n;
int xcs(int i) {
    if(i == 0) return 0;
    if(f[i] != -1) return f[i];
    int j = i, res = INT_MAX;
    while(j) {
        if(j % 10 != 0) res = min(res, xcs(i - j % 10) + 1);
        j /= 10;
    }
    return f[i] = res;
}
int main() {
    #ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    #endif
    cin >> n;
    f = vector<int>(n + 1, -1);
    cout << xcs(n) << endl;
    return 0;
}