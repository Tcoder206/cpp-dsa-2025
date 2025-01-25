/*
1
6
1 2 3 8 7 0
4
1
2
10
20
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        set<int> arr;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            arr.insert(x);
        }
        int q; cin >> q;
        while(q--) {
            int y; cin >> y;
            if(arr.count(y) == 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}