/*
1
4 5
1 2 2 9
2 0 9 8 3
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        vector<int> arr(n);
        set<int> se;
        for(int &x : arr) cin >> x;
        for(int i = 0; i < m; i++) {
            int y; cin >> y;
            se.insert(y);
        }
        bool exist = false;
        for(int i : arr) {
            if(se.count(i)) {
                exist = true;
            } else {
                cout << i << " ";
            }
        }
        if(!exist) cout << "NOT FOUND" << endl;
    }
    return 0;
}