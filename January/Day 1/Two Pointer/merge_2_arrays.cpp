#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m, a[1000], b[1000], c[2000]; cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int j = 0; j < m; j++) cin >> b[j];
    int x = 0, y = 0, z = 0;
    while(x < n && y < m) {
        if(a[x] <= b[y]) {
            c[z++] = a[x++];
        } else {
            c[z++] = b[y++];
        }
    }
    while(x < n) c[z++] = a[x++];
    while(y < m) c[z++] = b[y++];
    for(int i = 0; i < n + m; i++) cout << c[i] << " ";
    return 0;
}