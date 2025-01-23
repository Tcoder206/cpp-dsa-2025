/*
8
3 8 1 4 7 2 9 5
2 4 3
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    int arr[n];
    int pf[n];
    for(int &i : arr) cin >> i;
    for(int i = 0; i < n; i++) {
        if(i == 0) {
            pf[i] = arr[i];
        } else {
            pf[i] = arr[i] - arr[i - 1];
        }
    }
    int l, r, k; cin >> l >> r >> k;
    pf[l] += k;
    if(r + 1 < n) pf[r + 1] -= k;
    int sum = 0;
    for(int i : pf) {
        sum += i;
        cout << sum << " ";
    }
    return 0;
}