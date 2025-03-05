#include<bits/stdc++.h>
using namespace std;
int n, k, a[100], isFinal = 0, cnt;
void init() {
    a[1] = n;
    cnt = 1;
}
void sinh() {
    int i = cnt;
    while(i > 0 && a[i] == 1) {
        i--;
    }
    if(i == 0) {
        isFinal = 1;
    } else {
        a[i]--;
        int skip = cnt - i + 1;
        cnt = i;
        int q = skip/a[i];
        int r = skip%a[i];
        if(q) {
            for(int j = 1; j <= q; j++) {
                a[++cnt] = a[i];
            }
        }
        if(r) {
            a[++cnt] = r;
        }
    }
}
int main() {
    cin >> k >> n;
    init();
    while(!isFinal) {
        for(int i = 1; i <= cnt; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        sinh();
    }
    return 0;
}