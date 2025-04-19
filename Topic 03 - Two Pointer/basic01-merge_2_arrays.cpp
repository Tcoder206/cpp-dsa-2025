#include<bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    #endif
    int n, m; cin >> n >> m;
    int a[n], b[m], c[n + m], i = 0, j = 0, k = 0;
    for(int &i : a) cin >> i;
    for(int &i : b) cin >> i;
    while(i < n && j < m) c[k++] = (a[i] <= b[j]) ? a[i++] : b[j++];
    while(i < n) c[k++] = a[i++];
    while(j < m) c[k++] = b[j++];
    for(int &p : c) cout << p << " ";
    return 0;
}