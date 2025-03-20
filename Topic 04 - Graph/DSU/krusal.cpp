/*
6 9
1 2 12
1 3 4
2 3 1
2 4 5
2 5 3
3 5 2
4 5 3
4 6 10
5 6 8
 */
#include<bits/stdc++.h>
using namespace std;
int n, m, parent[10001], sz[10001];
void make_set() {
    for(int i = 1; i <= n; i++) {
        parent[i] = i;
        sz[i] = 1;
    }
}
int find(int u) {
    if(u == parent[u]) return u;
    return parent[u] = find(parent[u]);
}
bool dsu(int a, int b) {
    a = find(a), b = find(b);
    if(a == b) return false;
    if(sz[a] < sz[b]) swap(a, b);
    parent[b] = a;
    sz[a] += sz[b];
    return true;
}
struct edge{
    int u, v;
    int w;
};
bool cmp(edge a, edge b) {
    return a.w < b.w;
}
vector<edge> canh;
void krusal() {
    vector<edge> mst;
    int d = 0;
    sort(canh.begin(), canh.end(), cmp);
    for(int i = 0; i < m; i++) {
        if(mst.size() != n - 1) {
            edge e = canh[i];
            if(dsu(e.u, e.v)) {
                mst.push_back({e.u, e.v});
                d += e.w;
            }
        }
    }
    if(mst.size() != n - 1) {
        cout << "Do thi ko co mst" << endl;
    } else {
        cout << "MST: " << d << endl;
        for(auto k : mst) {
            cout << k.u << " " << k.v << " " << k.w << endl;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int x, y, z ; cin >> x >> y >> z;
        edge e = edge{x, y, z};
        canh.push_back(e);
    }
    make_set();
    krusal();
    return 0;
}
