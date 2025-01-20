#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *next;
};
typedef Node node;
node *makeNode(int x) {
    node *newNode = new Node();
    newNode->data = x;
    newNode->next = nullptr;
    return newNode;
}
void duyetNode(node *head) {
    while(head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
}
int countNode(node *head) {
    int cnt = 0;
    while(head != nullptr) {
        cnt++;
        head = head->next;
    }
    return cnt;
}
void pushFront(node **head, int x) {
    node *newNode = makeNode(x);
    newNode->next = *head;
    *head = newNode;
}
void pushBack(node **head, int x) {
    node *newNode = makeNode(x);
    node *temp = *head;
    if(*head == nullptr) {
        *head = newNode;
        return;
    }
    while(temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}
void insert(node **head, int x, int k) {
    node *newNode = makeNode(x);
    node *temp = *head;
    int n = countNode(*head);
    if(k < 1 || k > n) return;
    if(k == 1) {
        pushFront(head, x);
        return;
    }
    for(int i = 1; i <= k - 2; i++) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void menu() {
    cout << endl << "------------------------------" << endl;
    cout << "1. Them o dau tien" << endl;
    cout << "2. Them o giua" << endl;
    cout << "3. Them o cuoi cung" << endl;
    cout << "4. Duyet phan tu" << endl;
    cout << "0. Thoat" << endl;
    cout << "------------------------------" << endl;
    cout << "Nhap lua chon: ";
}
int main() {
    node *head = nullptr;
    bool run = true;//
    while(run) {
        menu();
        int n; cin >> n;
        switch(n) {
            case 1:
                int x1; cout << "Nhap doi so: ";
                cin >> x1;
                pushFront(&head, x1);
                break;
            case 3:
                int x3; cout << "Nhap doi so: ";
                cin >> x3;
                pushBack(&head, x3);
                break;
            case 2:
                int x2, k; cout << "Nhap doi so: ";
                cin >> x2 >> k;
                insert(&head, x2, k);
                break;
            case 4:
                cout << "Linked list: ";
                duyetNode(head);
                break;
            default:
                run = false;
                break;
        }
    }
    return 0;
}