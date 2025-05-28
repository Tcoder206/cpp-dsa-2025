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
int parent[100];
vector<vector<int>> arr;
bool bfs(int k) {
    visited[k] = true;
    queue<int> q;
    q.push(k);
    while(!q.empty()){
        int top = q.front(); q.pop();
        cout << top << " ";
        for(int u : arr[top]) {
            if(!visited[u]) {
                visited[u] = true;
                q.push(u);
                parent[u] = top;
            } else if(u != parent[top]) return true;
        }
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
    cout << boolalpha << bfs(1) << endl;
    return 0;
}