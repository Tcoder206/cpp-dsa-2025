#include<bits/stdc++.h>
using namespace std;
int n, a[31], isFinal;
void sinh() {
    int i = n;
    while(i > 0 && a[i] == 1) {
        a[i--] = 0;
    }
    if(i == 0) {
        isFinal = 1;
    } else {
        a[i] = 1;
    }
}
int main() {
    #ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    #endif
    int k; cin >> k;
    vector<string> v;
    for(n = 1; n <= k/2; n++) {
        isFinal = 0;
        while(!isFinal) {
            string s = "";
            for(int i = 1; i <= n; i++) s += to_string(a[i]);
            for(int i = n; i >= 1; i--) s += to_string(a[i]);
            v.push_back(s);
            sinh();
        }
    }
    sort(v.begin(), v.end());
    for(string x : v) cout << x << endl;
    return 0;
}