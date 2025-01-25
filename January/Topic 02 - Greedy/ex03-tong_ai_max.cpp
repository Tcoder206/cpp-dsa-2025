#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll modulo = 1e9 + 7;
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        ll sum = 0;
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n - 1; i++) {
            for(int j = i + 1; j < n; j++) {
                if(a[i] > a[j]) swap(a[i], a[j]);
            }
        }
        for(int i = 0; i < n; i++) {
            sum += (a[i] * i);
            sum %= modulo;
        }
        cout << sum << endl;
    }
}