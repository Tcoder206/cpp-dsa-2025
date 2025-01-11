#include<bits/stdc++.h>
using namespace std;
int main() {
    map<int, bool> ax;
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            ax[x] = true;
        }
        cout << ax.size() << endl;
    }
    return 0;
}