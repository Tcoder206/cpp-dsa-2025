#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, x, a[1000]; cin >> n >> x;
    for(int i = 0; i < n; i++) cin >> a[i];
    int l = 0, r = n - 1, check = 0;
    while(l < r) {
        if(a[l] + a[r] == x) {
            check = 1;
            break;
        } else {
            if(a[l] + a[r] > x){
                r--;
            } else {
                l++;
            }
        }
    }
    if(check) cout << "Yes";
    else cout << "No";
    return 0;
}