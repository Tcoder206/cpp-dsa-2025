#include<bits/stdc++.h>
using namespace std;
int n, m, s;
vector<pair<int, int>> arr[1000001];
void dijkstra(int u) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> L(n + 1, INT_MAX);
    L[u] = 0;
    pq.push({0, u});
    while(!pq.empty()) {
        pair<int, int> top = pq.top(); pq.pop();
        int currV = top.second, currW = top.first;
        if(L[currV] < currW) continue;
        for(auto it : arr[currV]) {
            int nextV = it.first, nextW = it.second;
            if(L[nextV] > L[currV] + nextW) {
                L[nextV] = L[currV] + nextW;
                pq.push({L[nextV], nextV});
            }
        }
    }
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
        int x, y, z; cin >> x >> y >> z;
        arr[x].push_back({y, z});
    }
    dijkstra(s);
    return 0;
}