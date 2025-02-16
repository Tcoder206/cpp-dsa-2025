#include<bits/stdc++.h>
using namespace std;
bool visited[100];
int parent[100];
vector<vector<int>> arr;
int n, m;
void bfs(int k) {
    queue<int> q;
    q.push(k);
    visited[k] = true;
    while(!q.empty()) {
        int top = q.front();
        q.pop();
        for(int u : arr[top]) {
            if(!visited[u]) {
                visited[u] = true;
                parent[u] = top;
                q.push(u);
            }
        }
    }
}
void unweightPath(int s, int t) {
    memset(visited, false, sizeof(visited));
    bfs(s);
    if(!visited[t]) {
        cout << "Do thi ko co duong di" << endl;
        return;
    }
    vector<int> path;
    while(t != s) {
        path.push_back(t);
        t = parent[t];
    }
    path.push_back(s);
    reverse(path.begin(), path.end());
    for(int i : path) {
        cout << i << " ";
    }
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
    unweightPath(s, t);
    return 0;
}