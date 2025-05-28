#include<bits/stdc++.h>
using namespace std;
int n, m, s;
set<int> a[10001];
int deg[10001];
void hierholzer(int u) {
    stack<int> st;
    vector<int> ec;
    st.push(u);
    while(!st.empty()) {
        int top = st.top();
        if(a[top].size() != 0) {
            int begin = *a[top].begin();
            a[top].erase(begin);
            a[begin].erase(top);
            st.push(begin);
        } else {
            st.pop();
            ec.push(top);
        }
    }
    reverse(ec.begin(), ec.end());
    for(int i : ec) cout << i << " ";
}
int main() {
    #ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    #endif
    cin >> n >> m >> s;
    for(int i = 1; i <= m; i++) {
        int x, y; cin >> x >> y;
        a[x].insert(y);
        a[y].insert(x);
        deg[x]++;
        deg[y]++;
    }
    hierholzer(s);
    return 0;
}