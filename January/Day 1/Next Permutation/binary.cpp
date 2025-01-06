// 000
// 001
#include<bits/stdc++.h>
using namespace std;
int n, a[100], isFinal = 0;
void init() {
    for(int i = 1; i <= n; i++) {
        a[i] = 0;
    }
}
void sinh() {
    int j = n;
    while(j >= 0 && a[j] == 1) {
        a[j--] = 0;
    }
    if(j == 0) {
        isFinal = 1;
    } else {
        a[j] = 1;
    }
}
int main() {
    cin >> n;
    init();
    while(!isFinal){
        for(int i = 1; i <= n; i++) {
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
    return 0;
}