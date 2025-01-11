/*
10 8
1 2
2 3
2 4
3 6
3 7
4 7
5 8
8 9
*/
#include<bits/stdc++.h>
using namespace std;
bool visited[100];
vector<vector<int>> arr;
int n, m;
void bfs(int k) {
    queue<int> temp;
    temp.push(k);
    visited[k] = true;
    while(!temp.empty()) {
        int top = temp.front();
        temp.pop();
        cout << top << " ";
        for(int u : arr[top]) {
            if(!visited[u]) {
                temp.push(u);
                visited[u] = true;
            }
        }
    }
}
int connectedGraph() {
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(!visited[i]) {
            cnt++;
            cout << "Thanh phan lien thong thu " << cnt << ": ";
            bfs(i);
            cout << endl;
        }
    }
    return cnt;
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
    int q = connectedGraph();
    cout << "So thanh phan lien thong: " << q << endl;
    return 0;
}