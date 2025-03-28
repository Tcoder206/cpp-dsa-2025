#include<bits/stdc++.h>
using namespace std;
bool visited[1000];
vector<vector<int>> arr;
int n, m;
void dfs(int k) {
    cout << k << " ";
    visited[k] = true;
    for(int x : arr[k]) {
        if(!visited[x]) dfs(x);
    }
}
int connectedGraph() {
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(!visited[i]) {
            cnt++;
            cout << "Thanh phan lien thong thu " << cnt << ": ";
            dfs(i);
            cout << endl;
        }
    }
    return cnt;
}
int main() {
    cin >> n >> m;
    arr.resize(n + 1);
    for(int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }
    int tplt = connectedGraph();
    cout << "So thanh phan lien thong: " << tplt << endl;
    return 0;
}