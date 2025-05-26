#include<bits/stdc++.h>
using namespace std;
int n;
string s;
const int ALPHABET_SIZE = 26;
struct Node {
    Node *child[ALPHABET_SIZE];
    Node() {
        for(int i = 0; i < ALPHABET_SIZE; i++) child[i] = nullptr;
    }
};
int trieNodeCount = 0;
#define MAX_NODE 1000100
Node nodes[MAX_NODE];
Node *makeNode(void) {
    return &nodes[trieNodeCount++];
}
Node *root;
void addString(const string &s) {
    Node *p = root;
    for(char c : s) {
        if(p->child[c - 'a'] == nullptr) p->child[c - 'a'] = makeNode();
        p = p->child[c - 'a'];
    }
}
int main() {
    #ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    #endif
    root = makeNode();
    cin >> n >> s;
    for(int i = 1; i <= n; i++) {
        addString(s);
    }
    return 0;
}
