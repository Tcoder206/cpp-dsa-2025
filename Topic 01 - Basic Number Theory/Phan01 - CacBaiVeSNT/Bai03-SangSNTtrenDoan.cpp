#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    int l, r; cin >> l >> r;
    int prime[r - l + 1];
    memset(prime, 1, sizeof(prime));
    for(int i = 2; i <= sqrt(r); i++) {
        int rounded = round(l / i)*i;
        for(int j = max(i * i, rounded); j <= r; j+= i) {
            prime[j - l] = 0;
        }
    }
    for(int i = max(2, l); i <= r; i++) {
        if(prime[i - l]) cout << i << " ";
    }
    return 0;
}
