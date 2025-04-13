// Bài dưới chưa sắp xếp theo thứ tự từ điển trong output
#include<bits/stdc++.h>
using namespace std;
int n, a[31];
void ql(int i) {
    for(int j = 0; j <= 1; j++) {
        a[i] = j;
        if(i <= n / 2) {
            for(int k = 1; k <= i; k++) cout << a[k];
            for(int k = i; k >= 1; k--) cout << a[k];
            cout << endl;
        }
        if(i < n / 2) ql(i + 1);
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
    ql(1);
    return 0;
}