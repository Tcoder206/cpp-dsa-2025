#include<bits/stdc++.h>
using namespace std;
int n, b[10], used[10];
void ql(int i) {
    for(int j = 1; j <= n; j++) {
        if(!used[j] && abs(j - b[i - 1]) != 1) {
            used[j] = 1;
            b[i] = j;
            if(i == n) {
                for(int k = 1; k <= n; k++) cout << b[k];
                cout << endl;
            } else if(i < n) ql(i + 1);
            used[j] = 0;
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