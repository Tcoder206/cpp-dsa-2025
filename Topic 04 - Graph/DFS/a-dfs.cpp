/*
V E
9 9
1 2
1 3
1 5
2 4
3 6
3 7
3 9
5 8
8 9
*/
#include<bits/stdc++.h>
using namespace std;
bool visited[100];
vector<vector<int>> arr;
void dfs(int k) {
    visited[k] = true;
    cout << k << " ";
    for(int u : arr[k]) {
        if(!visited[u]) dfs(u);
    }
}
int main() {
    int n, m; cin >> n >> m;
    arr.resize(n + 1);
    for(int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }
    dfs(1);
    return 0;
}