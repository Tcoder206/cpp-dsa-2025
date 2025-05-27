#include<bits/stdc++.h>
using namespace std;
int n, a[16], isFinal;
void init() {
    for(int i = 1; i <= n; i++){
        a[i] = 0;
    }
}
void sinh() {
    int i = n / 2;
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
        if(n % 2 == 0) {
            for(int i = 1; i <= n/2; i++) {
                cout << a[i];
            }
            for(int i = n/2; i >= 1; i--) {
                cout << a[i];
            }
            cout << endl;
        } else {
            for(int j = 0; j <= 1; j++){
                for(int i = 1; i <= n/2; i++) {
                    cout << a[i];
                }
                cout << j;
                for(int i = n/2; i >= 1; i--) {
                    cout << a[i];
                }
                cout << endl;
            }
        }
        sinh();
    }
    return 0;
}