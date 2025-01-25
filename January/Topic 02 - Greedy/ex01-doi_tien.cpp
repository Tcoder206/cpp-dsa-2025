#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int res = 0;
        int val[9] = {1, 2, 5, 10, 20, 50, 100, 200, 500};
        for(int i = 8; i >= 0; i--) {
            if(n >= val[i]) {
                res += (n / val[i]);
                n %= val[i];
            }
        }
        cout << res << endl;
    }
    return 0;
}