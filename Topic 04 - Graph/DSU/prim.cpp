#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e6;
int n, m, s;
vector<pair<int, int>> arr[maxn];
bool used[maxn];
int parent[maxn], d[maxn];
struct canh{
    int u, v, w;
};
void prim(int u) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
    vector<canh> mst;
    int res = 0;
    pq.push({0, u});
    while(!pq.empty()) {
        pair<int, int> top = pq.top(); pq.pop();
        int currV = top.second, currW = top.first;
        if(used[currV]) continue;
        used[currV] = true;
        res += currW;
        if(u != currV) {
            mst.push_back({currV, parent[currV], currW});
        }
        for(auto it : arr[currV]) {
            int nextV = it.first, nextW = it.second;
            if(!used[nextV] && d[nextV] > nextW) {
                d[nextV] = nextW;
                parent[nextV] = currV;
                pq.push({d[nextV], nextV});
            }
        }
    }
    cout << res << endl;
    for(auto it : mst) {
        cout << it.u << " " << it.v << " " << it.w << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    memset(used, false, sizeof(used));
    cin >> n >> m >> s;
    for(int i = 1; i <= n; i++) d[i] = INT_MAX;
    for(int i = 1; i <= m; i++) {
        int x, y, z; cin >> x >> y >> z;
        arr[x].push_back({y, z});
        arr[y].push_back({x, z});
    }
    prim(s);
    return 0;
}
