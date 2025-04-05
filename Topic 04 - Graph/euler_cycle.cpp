#include<bits/stdc++.h>
using namespace std;
int n, m, s;
set<int> arr[100001];
int deg[100001];
void hierholzer(int u) {
    stack<int> st;
    vector<int> ec;
    st.push(u);
    while(!st.empty()) {
        int top = st.top();
        if(arr[top].size() != 0) {
            int begin = *arr[top].begin();
            arr[begin].erase(top);
            arr[top].erase(begin);
            st.push(begin);
        } else {
            st.pop();
            ec.push_back(top);
        }
    }
    reverse(ec.begin(), ec.end());
    for(int u : ec) cout << u << " ";
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
        arr[x].insert(y);
        arr[y].insert(x);
        deg[x]++;
        deg[y]++;
    }
    hierholzer(s);
    return 0;
}