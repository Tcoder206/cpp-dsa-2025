#include<bits/stdc++.h>
using namespace std;
int n, m, s, t;
vector<vector<pair<int, int>>> arr;
int parent[1001];
void dijkstra(int a, int b) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> L(n + 1, INT_MAX), path;
    pq.push({0, a});
    L[a] = 0;
    while(!pq.empty()) {
        pair<int, int> top = pq.top(); pq.pop();
        int currV = top.second, currW = top.first;
        if(L[currV] < currW) continue;
        for(auto it : arr[currV]) {
            int nextV = it.first, nextW = it.second;
            if(L[nextV] > L[currV] + nextW) {
                L[nextV] = L[currV] + nextW;
                parent[nextV] = currV;
                pq.push({L[nextV], nextV});
            }
        }
    }
    while(b != a) {
        path.push_back(b);
        b = parent[b];
    }
    path.push_back(a);
    reverse(path.begin(), path.end());
    for(int x : path) cout << x << " ";
}
int main() {
    #ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    #endif
    cin >> n >> m >> s >> t;
    arr.resize(n + 1);
    for(int i = 1; i <= m; i++) {
        int x, y, z; cin >> x >> y >> z;
        arr[x].push_back({y, z});
        arr[y].push_back({x, z});
    }
    dijkstra(s, t);
    return 0;
}