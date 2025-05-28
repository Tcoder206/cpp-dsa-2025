#include<bits/stdc++.h>
using namespace std;
int n, sz[1001], parent[1001];
void make_set() {
    for(int i = 1; i <= n; i++) {
        parent[i] = i;
        sz[i] = 1;
    }
}
int find(int v) {
    if(v == parent[v]) return v;
    return parent[v] = find(parent[v]);
}
void join_sets(int a, int b) {
    a = find(a); b = find(b);
    if(a != b) {
        if(sz[a] < sz[b]) swap(a, b);
        parent[b] = a;
        sz[a] += sz[b];
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    cin >> n;
    return 0;
}
