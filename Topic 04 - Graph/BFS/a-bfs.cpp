/*
V E
10 11
1 2
1 3
1 5
1 10
2 4
3 6
3 7
3 9
6 7
5 8
8 9
*/
#include<bits/stdc++.h>
using namespace std;
bool visited[100];
vector<vector<int>> arr;
void bfs(int k) {
    queue<int> q;
    q.push(k);
    visited[k] = true;
    while(!q.empty()) {
        int top = q.front();
        q.pop();
        cout << top << " ";
        for(int u : arr[top]) {
            if(!visited[u]) {
                visited[u] = true;
                q.push(u);
            }
        }
    }
}
int main() {
    int n, m, s; cin >> n >> m >> s;
    arr.resize(n + 1);
    for(int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }
    bfs(s);
    return 0;
}