#include<bits/stdc++.h>
using namespace std;
int k, a[100], isFinal = 0;
void init() {
    for(int i = 1; i <= k; i++) {
        a[i] = i;
    }
}
void sinh() {
    int i = k - 1;
    while(i > 0 && a[i] > a[i + 1]) {
        i--;
    }
    if(i == 0) {
        isFinal = 1;
    } else {
        int j = k;
        while(a[i] > a[j]) j--;
        swap(a[j], a[i]);
        reverse(a + i + 1, a + k + 1);
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