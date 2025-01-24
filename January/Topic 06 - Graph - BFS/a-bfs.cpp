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
    memset(visited, false, sizeof(visited));
    queue<int> temp;
    temp.push(k);
    visited[k] = true;
    while(!temp.empty()) {
        int top = temp.front();
        cout << top << " ";
        temp.pop();
        for(int u : arr[top]) {
            if(!visited[u]) {
                visited[u] = true;
                temp.push(u);
            }
        }
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
    bfs(1);
    return 0;
}