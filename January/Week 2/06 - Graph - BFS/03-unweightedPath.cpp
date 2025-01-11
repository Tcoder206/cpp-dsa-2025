#include<bits/stdc++.h>
using namespace std;
bool visited[100];
int parent[100];
vector<vector<int>> arr;
int n, m;
void bfs(int k) {
    queue<int> temp;
    temp.push(k);
    visited[k] = true;
    while(!temp.empty()) {
        int top = temp.front();
        temp.pop();
        for(int u : arr[top]) {
            if(!visited[u]) {
                temp.push(u);
                parent[u] = top;
                visited[u] = true;
            }
        }
    }
}
void unweightedPath(int s, int t) {
    bfs(s);
    vector<int> upath;
    while(t != s) {
        upath.push_back(t);
        t = parent[t];
    }
    upath.push_back(s);
    reverse(upath.begin(), upath.end());
    for(int x : upath) cout << x << " ";
}
int main() {
    cin >> n >> m;
    arr.resize(n + 1);
    memset(visited, false, sizeof(visited));
    for(int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }
    int s, t; cin >> s >> t;
    unweightedPath(s, t);
    return 0;
}