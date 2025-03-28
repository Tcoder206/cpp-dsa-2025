/*
7 6
1 2
2 3
2 4
3 6
6 7
1 6
*/
#include<bits/stdc++.h>
using namespace std;
bool visited[100];
vector<vector<int>> arr;
vector<int> parent;
bool dfs(int u) {
    visited[u] = true;
    cout << u << " ";
    for(int v : arr[u]) {
        if(!visited[v]) {
            parent[v] = u;
            if(dfs(v)) return true;
        } else if(v != parent[u]) return true;
    }
    return false;
}

int main() {
    int n, m; cin >> n >> m;
    arr.resize(n + 1);
    for(int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }
    cout << boolalpha << dfs(1) << endl;
    return 0;
}