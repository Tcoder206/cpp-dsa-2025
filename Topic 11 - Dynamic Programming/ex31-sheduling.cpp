#include<bits/stdc++.h>
using namespace std;
struct Prj {
    int start, end, reward;
};
int main() {
    #ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    #endif
    int n; cin >> n;
    vector<Prj> a(n); vector<int> dp(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i].start >> a[i].end >> a[i].reward;
        dp[i] = a[i].reward;
    }
    sort(a.begin(), a.end(), [](const Prj &x, const Prj &y) {
        return x.end < y.end;
    });
    for(int i = 1; i < n; i++) for(int j = 0; j < i; j++) {
        if(a[j].end < a[i].start) dp[i] = max(dp[i], dp[j] + a[i].reward);
    }
    cout << *max_element(dp.begin(), dp.end()) << endl;
    return 0;
}