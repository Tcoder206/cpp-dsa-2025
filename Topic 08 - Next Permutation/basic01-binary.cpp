// 000
// 001
#include<bits/stdc++.h>
using namespace std;
int n, a[100], isFinal = 0;
void init() {
    for(int i = 0; i < n; i++) {
        a[i] = 0;
    }
}
void sinh() {
    int i = n - 1;
    while(i > 0 && a[i] == 1) {
        a[i--] = 0;
    }
    if(i == 0) {
        isFinal = 1;
    } else {
        a[i] = 1;
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
    init();
    while(!isFinal) {
        for(int i = 0; i < n; i++) {
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
    return 0;
}