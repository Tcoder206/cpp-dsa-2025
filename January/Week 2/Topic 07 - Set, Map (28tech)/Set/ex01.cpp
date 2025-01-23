#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        set<int> newArr;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            newArr.insert(x);
        }
        for(int i : newArr) cout << i << " ";
        cout << endl << newArr.size() << endl;
    }
    return 0;
}