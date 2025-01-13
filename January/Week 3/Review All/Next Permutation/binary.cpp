#include<bits/stdc++.h>
using namespace std;
int k, a[100], isFinal = 0;
void init() {
    for(int i = 1; i <= k; i++) {
        a[i] = 0;
    }
}
void sinh() {
    int i = k;
    while(i > 0 && a[i] == 1) {
        a[i] = 0;
        i--;
    }
    if(i == 0) {
        isFinal = 1;
    } else {
        a[i] = 1;
    }
}
int main() {
    cin >> k;
    init();
    while(!isFinal) {
        for(int i = 1; i <= k; i++) {
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
    return 0;
}