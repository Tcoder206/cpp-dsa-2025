#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *next;
};
typedef struct Node node;
node *makeNode(int x) {
    node *newNode = new Node();
    newNode->data = x;
    newNode->next = nullptr;
    return newNode;
}
void stackPush(node **head, int x) {
    node *newNode = makeNode(x);
    newNode->next = *head;
    *head = newNode;
}
void stackPop(node **head) {
    node *temp = *head;
    if(*head == nullptr) return;
    *head = (*head)->next;
    delete temp;
}
int stackSize(node *head) {
    int cnt = 0;
    while(head != nullptr) {
        cnt++;
        head = head->next;
    }
    return cnt;
}
int stackTop(node *head) {
    if(head == nullptr) return;
    return head->data;
}
bool stackIsEmpty(node *head) {
    int n = stackSize(head);
    return (n <= 0 ? true : false);
}
int main() {
    #ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    #endif
    
    return 0;
}