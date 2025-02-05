#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int &i : a) cin >> i;
    for(int &i : b) cin >> i;
    int c[n + m];
    int i = 0, j = 0, k = 0;
    while(i < n && j < m) {
        c[k++] = (a[i] < b[j]) ? a[i++] : b[j++];
    }
    while(i < n) c[k++] = a[i++];
    while(j < n) c[k++] = b[j++];
    for(int &i : c) cout << i << " ";
    return 0;
}