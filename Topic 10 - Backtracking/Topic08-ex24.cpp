#include<bits/stdc++.h>
using namespace std;
char c, a[10];
int k;
void ql(int i) {
    for(char j = 'A'; j <= c; j++) {
        a[i] = j;
        if(i == k) {
            for(int q = 1; q <= k; q++) {
                cout << a[q];
            }
            cout << endl;
        } else {
            ql(i + 1);
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
    cin >> c >> k;
    ql(1);
    return 0;
}