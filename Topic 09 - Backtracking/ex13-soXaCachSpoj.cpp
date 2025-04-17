#include<bits/stdc++.h>
using namespace std;
int n, b[10], used[10];
void ql(int u) {
    for(int i = 1; i <= n; i++) {
        if(!used[i] && abs(i - b[u - 1]) != 1) {
            used[i] = 1;
            b[u] = i;
            if(u == n) {
                for(int j = 1; j <= u; j++) {
                    cout << b[j] << " ";
                }
                cout << endl;
            } else ql(u + 1);
            used[i] = 0;
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
    b[0] = 0;
    ql(1);
    return 0;
}