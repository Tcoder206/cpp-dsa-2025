#include<bits/stdc++.h>
using namespace std;
bool tknp(int a[], int l, int r, int x) {
    while(l <= r) {
        int m = l + (r - l)/2;
        if(a[m] == x) return true;
        else if(a[m] < x) l = m + 1;
        else r = m - 1;
    }
    return false;
}
int main() {
    #ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    #endif
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    return 0;
}