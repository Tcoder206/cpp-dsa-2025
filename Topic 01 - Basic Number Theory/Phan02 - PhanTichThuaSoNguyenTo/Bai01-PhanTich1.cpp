#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    int n; cin >> n;
    for(int i = 2; i <= sqrt(n); i++) {
        while(n % i == 0) {
            n /= i;
            cout << i << " ";
        }
    }
    if(n != 1) cout << n << " ";
    return 0;
}
