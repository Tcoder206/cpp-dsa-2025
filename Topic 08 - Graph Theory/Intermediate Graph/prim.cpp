#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e6;
int n, m, s;
struct edge{
    int u, v, w;
};
vector<vector<pair<int, int>>> a;
int parent[maxn], used[maxn];
void prim(int t) {
    vector<int> d(n + 1, INT_MAX);
    d[t] = 0;
    vector<edge> mst;
    int res = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, t});
    while(!pq.empty()) {
        pair<int, int> top = pq.top(); pq.pop();
        int currV = top.second, currW = top.first;
        if(used[currV]) continue;
        used[currV] = 1;
        res += currW;
        if(t != currV) {
            mst.push_back({ parent[currV], currV, currW });
        }
        for(auto it : a[currV]) {
            int nextV = it.first, nextW = it.second;
            if(!used[nextV] && d[nextV] > nextW) {
                d[nextV] = nextW;
                parent[nextV] = currV;
                pq.push({ d[nextV], nextV });
            }
        }
    }
    cout << res << endl;
    for(auto it: mst) cout << it.u << " " << it.v << " " << it.w << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    cin >> n >> m >> s;
    a.resize(n + 1);
    for(int i = 0; i < m; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        a[x].push_back({y, z});
        a[y].push_back({x, z});
    }
    prim(s);
    return 0;
}
