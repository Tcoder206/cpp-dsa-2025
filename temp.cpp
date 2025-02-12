#include<bits/stdc++.h>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    #endif
    return 0;
}

// struct Node {
//     int data;
//     Node *next;
// };
// typedef Node node;
// node *makeNode(int x) {
//     node *newNode = new Node();
//     newNode->data = x;
//     newNode->next = nullptr;
//     return newNode;
// }
// void duyetNode(node *head) {
//     while(head != nullptr) {
//         cout << head->data << " ";
//         head = head->next;
//     }
// }
// int countNode(node *head) {
//     int cnt = 0;
//     while(head != nullptr) {
//         cnt++;
//         head = head->next;
//     }
//     return cnt;
// }
// void pushFront(node **head, int x) {
//     node *newNode = makeNode(x);
//     newNode->next = *head;
//     *head = newNode;
// }
// void pushBack(node **head, int x) {
//     node *newNode = makeNode(x);
//     node *temp = *head;
//     if(*head == nullptr) {
//         *head = newNode;
//         return;
//     }
//     while(temp->next != nullptr) {
//         temp = temp->next;
//     }
//     temp->next = newNode;
// }
// void insert(node **head, int x, int k) {
//     node *newNode = makeNode(x);
//     node *temp = *head;
//     int n = countNode(*head);
//     if(k < 1 || k > n + 1) return;
//     if(k == 1) {
//         pushFront(head, x);
//         return;
//     }
//     for(int i = 1; i <= k - 2; i++) {
//         temp = temp->next;
//     }
//     newNode->next = temp->next;
//     temp->next = newNode;
// }
// void popFront(node **head) {
//     node *temp = *head;
//     if(*head == nullptr) return;
//     *head = (*head)->next;
//     delete temp;
// }
// void popBack(node **head) {
//     node *temp = *head;
//     if(*head == nullptr) return;
//     if(temp->next == nullptr) {
//         *head = nullptr;
//         delete temp; return;
//     }
//     while(temp->next->next != nullptr) {
//         temp = temp->next;
//     }
//     node *last = temp->next;
//     temp->next = nullptr;
//     delete last;
// }
// void popNode(node **head, int k) {
//     node *temp = *head;
//     int n = countNode(*head);
//     if(k < 1 || k > n + 1) return;
//     if(*head == nullptr)  return;
//     for(int i = 1; i <= k - 2; i++) {
//         temp = temp->next;
//     }
//     node *elm = temp->next;
//     temp->next = elm->next;
//     delete elm;
// }