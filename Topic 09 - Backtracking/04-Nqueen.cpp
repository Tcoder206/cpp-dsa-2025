#include<bits/stdc++.h>
using namespace std;
int n, a[101], col[101], right_diag[101], reverse_diag[101];
void result() {
    for(int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
void Try(int i) {
    for(int j = 1; j <= n; j++) {
        if(!col[j] && !right_diag[i - j + n] && !reverse_diag[i + j - 1]) {
            col[j] = right_diag[i - j + n] = reverse_diag[i + j - 1] = 1;
            a[i] = j;
            if(i == n) {
                result();
            } else {
                Try(i + 1);
            }
            col[j] = right_diag[i - j + n] = reverse_diag[i + j - 1] = 0;
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
    cin >> n;
    Try(1);
    return 0;
}