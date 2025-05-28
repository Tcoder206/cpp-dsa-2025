/*
10 8
1 2
2 3
2 4
3 6
3 7
6 7
5 8
8 9
1 7
-> 1 2 3 6 7
*/

#include<bits/stdc++.h>
using namespace std;
bool visited[1000];
int parent[1000];
vector<vector<int>> arr;
void dfs(int k) {
    visited[k] = true;
    for(int u : arr[k]) {
        if(!visited[u]) {
            parent[u] = k;
            dfs(u);
        }
    }
}
void unweightedPath(int s, int t) {
    memset(visited, false, sizeof(visited));
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
    int n, m; cin >> n >> m;
    arr.resize(n + 1);
    for(int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }
    int s, t; cin >> s >> t;
    unweightedPath(s, t);
    return 0;
}