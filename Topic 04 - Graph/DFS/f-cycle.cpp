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
bool dfs(int u, int parent) {
    visited[u] = true;
    cout << u << " ";
    for(int k : arr[u]) {
        if(!visited[k]) {
            if(dfs(k, u)) return true;
        } else if(k != parent) return true;
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
    cout << boolalpha << dfs(1, 0) << endl;
    return 0;
}