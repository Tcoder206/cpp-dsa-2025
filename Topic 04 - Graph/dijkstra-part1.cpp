#include<bits/stdc++.h>
using namespace std;
int n, m, s;
vector<pair<int, int>> arr[1000001];
void dijkstra(int u) {
    vector<int> L(n + 1, INT_MAX);
    L[u] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, u});
    while(!pq.empty()) {
        pair<int, int> top = pq.top();
        pq.pop();
        int currW = top.first;
        int currV = top.second;
        if(currW > L[currV]) continue;
        for(auto it : arr[currV]) {
            int nextV = it.first;
            int nextW = it.second;
            if(L[nextV] > L[currV] + nextW) {
                L[nextV] = L[currV] + nextW;
                pq.push({L[nextV], nextV});
            }
        }
    }
    for(int i = 1; i <= n; i++) {
        cout << L[i] << " ";
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
    for(int i = 0; i < m; i++) {
        int x, y, z; cin >> x >> y >> z;
        arr[x].push_back({y, z});
        arr[y].push_back({x, z});
    }
    dijkstra(s);
    return 0;
}