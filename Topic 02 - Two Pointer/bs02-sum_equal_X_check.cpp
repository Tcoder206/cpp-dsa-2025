#include<bits/stdc++.h>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    #endif
    int n, x;
    cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int i = 0, j = n - 1;
    bool check = false;
    while(i < j) {
        if(a[i] + a[j] == x) {
            check = true;
            break;
        } else if(a[i] + a[j] > x) {
            j--;
        } else {
            i++;
        }
    }
    cout << (check ? "Yes" : "No") << endl;
    return 0;
}