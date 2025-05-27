#include<bits/stdc++.h>
using namespace std;
int n, k, a[100], isFinal;
void init() {
    for(int i = 1; i <= k; i++) {
        a[i] = i;
    }
}
void sinh() {
    int i = k;
    while(i > 0 && a[i] == n - k + i){
        i--;
    }
    if(i == 0) {
        isFinal = 1;
    } else {
        a[i]++;
        for(int j = i + 1; j <= k; j++) {
            a[j] = a[j - 1] + 1;
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
    cin >> k >> n;
    init();
    while(!isFinal) {
        for(int i = 1; i <= k; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        sinh();
    }
    return 0;
}