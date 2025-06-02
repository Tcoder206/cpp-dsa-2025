#include<bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    #endif
    int n, k, check = 0;
    cin >> n >> k;
    int a[n];
    set<int> res;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i])
    }
    for(int i = 0; i < k; i++) {
        if(res.count(a[i])) {
            check = 1;
            break;
        }
        res.insert(a[i]);
    }
    for(int i = k; i < n; i++) {
        res.erase(a[i - k]);
        if(res.count(a[i])) {
            check = 1;
            break;
        }
        res.insert(a[i]);
    }
    cout << check ? "YES" : "NO" << endl;
    return 0;
}